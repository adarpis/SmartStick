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
#include "../mcc_generated_files/mcc.h"

/**
  Section: Macro Declarations
 */
//#define FOO 16

/**
  Section: Global Variables
 */
//volatile uint8_t foo = 0;

/**
  Section: Time & Delay APIs
 */
void TimeDelay_Initialize(void) {
    TMR0_SetInterruptHandler(&Ticker_Handler);
}

void Ticker_Handler(void) {
    static uint8_t ticks;
    ticks++;
}

void TimeDelay_Tasks(void) {
    switch (TimeDelay_Data.state) {
        case TIMEDELAY_STATES_INIT:
        {
            TimeDelay_Data.state = TIMEDELAY_STATES_IDLE;
            break;
        }
        case TIMEDELAY_STATES_IDLE:
        {

            break;
        }
    }
}