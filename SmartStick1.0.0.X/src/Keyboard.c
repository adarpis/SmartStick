/**
  Keyboard Source File

  @Company
    PrototypeIDI.

  @File Name
    Keyboard.c

  @Summary
    This is the generic routines using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This source file provides APIs for generic routines.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65
        Device            :  PIC16LF15344
        Version    :  1.00
    The drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.10
 */

/**
  Section: Included Files
 */
#include "Keyboard.h"
#include "../mcc_generated_files/mcc.h"

/**
  Section: Macro Declarations
 */
#define KEY_A (PORTCbits.RC6)
#define KEY_B (PORTCbits.RC7)
#define KEY_C (PORTBbits.RB6)
#define DELAY_F1  3000U
#define DELAY_F2  5000U
#define DELAY_ESC 30000U
#define DELAY_B   10U

/**
  Section: Global Variables
 */
vTimer delay_F1;
vTimer delay_F2;
vTimer delay_BA;
vTimer delay_BB;
vTimer delay_BC;
vTimer delay_ESC;

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
void Keyboard_Process_A(void);

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
void Keyboard_Process_B(void);

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
void Keyboard_Time_Out(void);

/**
  Section: Keyboard APIs
 */
void Keyboard_Initialize(void) {
    TimeDelay_Set(&delay_F1, DELAY_F1);
    TimeDelay_Set(&delay_F2, DELAY_F2);
    TimeDelay_Set(&delay_BA, DELAY_B);
    TimeDelay_Set(&delay_BB, DELAY_B);
    TimeDelay_Set(&delay_BC, DELAY_B);
    TimeDelay_Set(&delay_ESC, DELAY_ESC);
}

void Keyboard_Process_A(void) {
    if (KEY_A && KEY_B) {
        if (!KEY_C && !NonBlockingDelay(&delay_F1)) {
            //F1
            Keyboard_Data.state = KEYBOARD_STATES_F1;
        } else if (!NonBlockingDelay(&delay_F2)) {
            //F2
            Keyboard_Data.state = KEYBOARD_STATES_F2;
        }
    } else {
        TimeDelay_Reset(&delay_F1);
        TimeDelay_Reset(&delay_F2);
    }
    //while (NonBlockingDelay(&delay_F1));
}

void Keyboard_Process_B(void) {
    if (KEY_A && !NonBlockingDelay(&delay_BA)) {
        //Function BA
    } else TimeDelay_Reset(&delay_BA);
    if (KEY_B && !NonBlockingDelay(&delay_BB)) {
        //Function BB
    } else TimeDelay_Reset(&delay_BB);
    if (KEY_C && !NonBlockingDelay(&delay_BC)) {
        //Function BC
    } else TimeDelay_Reset(&delay_BC);
}

void Keyboard_Time_Out(void) {
    if (!NonBlockingDelay(&delay_ESC)) {
        
    }
}

void Keyboard_Tasks(void) {
    switch (Keyboard_Data.state) {
        case KEYBOARD_STATES_INIT:
        {
            Keyboard_Initialize();
            Keyboard_Data.state = KEYBOARD_STATES_PROCESS;
            break;
        }
        case KEYBOARD_STATES_PROCESS:
        {
            Keyboard_Process_A();
            break;
        }
        case KEYBOARD_STATES_F1:
        {
            Keyboard_Process_B();
            break;
        }
        case KEYBOARD_STATES_F2:
        {
            
            break;
        }
    }
}