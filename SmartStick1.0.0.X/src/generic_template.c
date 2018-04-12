/**
  Generic Source File

  @Company
    PrototypeIDI.

  @File Name
    Generic.c

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
#include "Generic.h"
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
  Section: Generic APIs
 */
void Generic_Initialize(void) {

}

void Generic_Tasks(void) {
    switch (Generic_Data.state) {
        case GENERIC_STATES_INIT:
        {
            Generic_Data.state = GENERIC_STATES_IDLE;
            break;
        }
        case GENERIC_STATES_IDLE:
        {

            break;
        }
    }
}