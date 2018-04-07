/**
  SENSOR_MB1040 Driver File

  @Company
    PrototypeIDI.

  @File Name
    Sensor_MB1040.c

  @Summary
    This is the driver implementation file for the SENSOR_MB1040 driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This source file provides APIs for SENSOR_MB1040.
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
#include "Sensor_MB1040.h"
#include "../mcc_generated_files/mcc.h"

/**
  Section: Macro Declarations
 */

//#define EUSART2_TX_BUFFER_SIZE 16
//#define EUSART2_RX_BUFFER_SIZE 64

/**
  Section: Global Variables
 */
//volatile uint8_t eusart2TxHead = 0;
//volatile uint8_t eusart2TxTail = 0;
//volatile uint8_t eusart2TxBuffer[EUSART2_TX_BUFFER_SIZE];

/**
  Section: SENSOR_MB1040 APIs
 */
void MB1040_Initialize(void) {
    //Enable SENSOR_MB1040
    ENASEN_SetHigh();

    /**
     * SENSOR_MB1040 the BW pin is held high the TX output sends a single pulse,
     * suitable for low noise chaining. (No serial data)
     */
    BW_SetHigh();
}

void MB1040_Tasks(void) {

    switch (MB1040_Data.state) {
        case MB1040_STATES_INIT:
        {
            MB1040_Data.state = MB1040_STATES_IDLE;
            break;
        }
        case MB1040_STATES_IDLE:
        {
            if (ADCval.adcResultTot > 18 && ADCval.adcResultTot < 58) {
                Buzer_SetHigh();
            } else {
                Buzer_SetLow();
            }
            break;
        }
    }
}