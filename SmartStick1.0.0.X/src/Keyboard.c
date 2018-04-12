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
//#define FOO 16

/**
  Section: Global Variables
 */
//volatile uint8_t foo = 0;

/**
  Section: Keyboard APIs
 */
void Keyboard_Initialize(void) {

}

void Keyboard_Tasks(void) {
    switch (Keyboard_Data.state) {
        case KEYBOARD_STATES_INIT:
        {
            Keyboard_Data.state = KEYBOARD_STATES_IDLE;
            break;
        }
        case KEYBOARD_STATES_IDLE:
        {

            break;
        }
    }
}