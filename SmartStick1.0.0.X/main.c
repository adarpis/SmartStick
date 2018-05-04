/**
  Main Source File for SmartStick1.0.0

  Company:
    PrototypeIDI.

  File Name:
    main.c

  Summary:
    This is the main file using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65
        Device            :  PIC16LF15344
        Driver Version    :  2.00
 */

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void) {
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    ENACOM_SetHigh();

    while (1) {
        // Add your application code
        MB1040_Tasks();
        TimeDelay_Tasks();
        Keyboard_Tasks();
    }
}
/**
 End of File
 */