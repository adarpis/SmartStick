/**
  TimeDelay Source File

  @Company
    PrototypeIDI.

  @File Name
    TimeDelay.c

  @Summary
    This is the time and delay generic non blocking routines using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This source file provides APIs for time and delay routines.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65
        Device            :  PIC16LF15344
        Driver Version    :  1.00
    The drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.10
 */

/**
  Section: Included Files
 */
#include "TimeDelay.h"
#include <assert.h>
#include "../mcc_generated_files/mcc.h"

/**
  Section: Macro Declarations
 */
//#define FOO 16

/**
  Section: Global Variables
 */
volatile uint16_t ticks;

/**
@Summary
  None.

@Description
  None

@Preconditions
  None

@Param
  None

@Returns
  None

@Comment
    
 */
void Ticker_Handler(void);

/**
  Section: Time & Delay APIs
 */
void TimeDelay_Initialize(void) {
    TMR0_SetInterruptHandler(&Ticker_Handler);
}

void Ticker_Handler(void) {
    ticks++;
}

void TimeDelay_Reset (vTimer *vTimer) {
    vTimer->status = false;
}

void TimeDelay_Set (vTimer *vTimer, unsigned int delay) {
    vTimer->delay = delay;
    vTimer->status = false;
}

unsigned char NonBlockingDelay(vTimer *vTimer) {
    // structure de timer con valor y status
    if (!vTimer->status) {
        vTimer->down = ticks;
        vTimer->up = vTimer->down + vTimer->delay;
        vTimer->status = true;
    } else if ((ticks > vTimer->up && ticks < vTimer->down) &&
            vTimer->down > vTimer->up) {
        vTimer->status = false;
    } else if ((ticks > vTimer->up || ticks < vTimer->down) &&
            vTimer->down < vTimer->up) {
        vTimer->status = false;
    }
    return vTimer->status;
}

void TimeDelay_Tasks(void) {
    static uint16_t prior_ticks_secure;
    switch (TimeDelay_Data.state) {
        case TIMEDELAY_STATES_INIT:
        {
            TimeDelay_Initialize();
            TimeDelay_Data.state = TIMEDELAY_STATES_IDLE;
            break;
        }
        case TIMEDELAY_STATES_IDLE:
        {
            //Optimizing, it can put WDT reset to do these
            __conditional_software_breakpoint(ticks <= prior_ticks_secure);
            if (ticks >= prior_ticks_secure)
                TimeDelay_Data.state = TIMEDELAY_STATES_ERROR;
            prior_ticks_secure = ticks + SAFETY_MLOOP_TIME;
            break;
        }
        case TIMEDELAY_STATES_ERROR:
        {
            RESET();
        }
    }
}