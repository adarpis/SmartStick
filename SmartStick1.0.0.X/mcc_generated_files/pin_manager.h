/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC16LF15344
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set PW aliases
#define PW_TRIS               TRISAbits.TRISA2
#define PW_LAT                LATAbits.LATA2
#define PW_PORT               PORTAbits.RA2
#define PW_WPU                WPUAbits.WPUA2
#define PW_OD                ODCONAbits.ODCA2
#define PW_ANS                ANSELAbits.ANSA2
#define PW_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define PW_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define PW_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define PW_GetValue()           PORTAbits.RA2
#define PW_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define PW_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define PW_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define PW_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define PW_SetPushPull()    do { ODCONAbits.ODCA2 = 0; } while(0)
#define PW_SetOpenDrain()   do { ODCONAbits.ODCA2 = 1; } while(0)
#define PW_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define PW_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set ANA aliases
#define ANA_TRIS               TRISAbits.TRISA4
#define ANA_LAT                LATAbits.LATA4
#define ANA_PORT               PORTAbits.RA4
#define ANA_WPU                WPUAbits.WPUA4
#define ANA_OD                ODCONAbits.ODCA4
#define ANA_ANS                ANSELAbits.ANSA4
#define ANA_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define ANA_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define ANA_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define ANA_GetValue()           PORTAbits.RA4
#define ANA_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define ANA_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define ANA_SetPullup()      do { WPUAbits.WPUA4 = 1; } while(0)
#define ANA_ResetPullup()    do { WPUAbits.WPUA4 = 0; } while(0)
#define ANA_SetPushPull()    do { ODCONAbits.ODCA4 = 0; } while(0)
#define ANA_SetOpenDrain()   do { ODCONAbits.ODCA4 = 1; } while(0)
#define ANA_SetAnalogMode()  do { ANSELAbits.ANSA4 = 1; } while(0)
#define ANA_SetDigitalMode() do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set ENACOM aliases
#define ENACOM_TRIS               TRISAbits.TRISA5
#define ENACOM_LAT                LATAbits.LATA5
#define ENACOM_PORT               PORTAbits.RA5
#define ENACOM_WPU                WPUAbits.WPUA5
#define ENACOM_OD                ODCONAbits.ODCA5
#define ENACOM_ANS                ANSELAbits.ANSA5
#define ENACOM_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define ENACOM_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define ENACOM_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define ENACOM_GetValue()           PORTAbits.RA5
#define ENACOM_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define ENACOM_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define ENACOM_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define ENACOM_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)
#define ENACOM_SetPushPull()    do { ODCONAbits.ODCA5 = 0; } while(0)
#define ENACOM_SetOpenDrain()   do { ODCONAbits.ODCA5 = 1; } while(0)
#define ENACOM_SetAnalogMode()  do { ANSELAbits.ANSA5 = 1; } while(0)
#define ENACOM_SetDigitalMode() do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set ENASEN aliases
#define ENASEN_TRIS               TRISBbits.TRISB4
#define ENASEN_LAT                LATBbits.LATB4
#define ENASEN_PORT               PORTBbits.RB4
#define ENASEN_WPU                WPUBbits.WPUB4
#define ENASEN_OD                ODCONBbits.ODCB4
#define ENASEN_ANS                ANSELBbits.ANSB4
#define ENASEN_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define ENASEN_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define ENASEN_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define ENASEN_GetValue()           PORTBbits.RB4
#define ENASEN_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define ENASEN_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define ENASEN_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define ENASEN_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define ENASEN_SetPushPull()    do { ODCONBbits.ODCB4 = 0; } while(0)
#define ENASEN_SetOpenDrain()   do { ODCONBbits.ODCB4 = 1; } while(0)
#define ENASEN_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define ENASEN_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set PRX aliases
#define PRX_TRIS               TRISBbits.TRISB5
#define PRX_LAT                LATBbits.LATB5
#define PRX_PORT               PORTBbits.RB5
#define PRX_WPU                WPUBbits.WPUB5
#define PRX_OD                ODCONBbits.ODCB5
#define PRX_ANS                ANSELBbits.ANSB5
#define PRX_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define PRX_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define PRX_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define PRX_GetValue()           PORTBbits.RB5
#define PRX_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define PRX_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define PRX_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define PRX_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define PRX_SetPushPull()    do { ODCONBbits.ODCB5 = 0; } while(0)
#define PRX_SetOpenDrain()   do { ODCONBbits.ODCB5 = 1; } while(0)
#define PRX_SetAnalogMode()  do { ANSELBbits.ANSB5 = 1; } while(0)
#define PRX_SetDigitalMode() do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set IO3 aliases
#define IO3_TRIS               TRISBbits.TRISB6
#define IO3_LAT                LATBbits.LATB6
#define IO3_PORT               PORTBbits.RB6
#define IO3_WPU                WPUBbits.WPUB6
#define IO3_OD                ODCONBbits.ODCB6
#define IO3_ANS                ANSELBbits.ANSB6
#define IO3_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO3_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO3_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO3_GetValue()           PORTBbits.RB6
#define IO3_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO3_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO3_SetPullup()      do { WPUBbits.WPUB6 = 1; } while(0)
#define IO3_ResetPullup()    do { WPUBbits.WPUB6 = 0; } while(0)
#define IO3_SetPushPull()    do { ODCONBbits.ODCB6 = 0; } while(0)
#define IO3_SetOpenDrain()   do { ODCONBbits.ODCB6 = 1; } while(0)
#define IO3_SetAnalogMode()  do { ANSELBbits.ANSB6 = 1; } while(0)
#define IO3_SetDigitalMode() do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()    do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()   do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()   do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()         PORTCbits.RC0
#define RC0_SetDigitalInput()   do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()  do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()     do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()   do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode() do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()    do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()   do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()   do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()         PORTCbits.RC1
#define RC1_SetDigitalInput()   do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()  do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()     do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()   do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode() do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set BW aliases
#define BW_TRIS               TRISCbits.TRISC2
#define BW_LAT                LATCbits.LATC2
#define BW_PORT               PORTCbits.RC2
#define BW_WPU                WPUCbits.WPUC2
#define BW_OD                ODCONCbits.ODCC2
#define BW_ANS                ANSELCbits.ANSC2
#define BW_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define BW_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define BW_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define BW_GetValue()           PORTCbits.RC2
#define BW_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define BW_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define BW_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define BW_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define BW_SetPushPull()    do { ODCONCbits.ODCC2 = 0; } while(0)
#define BW_SetOpenDrain()   do { ODCONCbits.ODCC2 = 1; } while(0)
#define BW_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define BW_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set CHG aliases
#define CHG_TRIS               TRISCbits.TRISC3
#define CHG_LAT                LATCbits.LATC3
#define CHG_PORT               PORTCbits.RC3
#define CHG_WPU                WPUCbits.WPUC3
#define CHG_OD                ODCONCbits.ODCC3
#define CHG_ANS                ANSELCbits.ANSC3
#define CHG_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define CHG_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define CHG_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define CHG_GetValue()           PORTCbits.RC3
#define CHG_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define CHG_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define CHG_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define CHG_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define CHG_SetPushPull()    do { ODCONCbits.ODCC3 = 0; } while(0)
#define CHG_SetOpenDrain()   do { ODCONCbits.ODCC3 = 1; } while(0)
#define CHG_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define CHG_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set Motor aliases
#define Motor_TRIS               TRISCbits.TRISC4
#define Motor_LAT                LATCbits.LATC4
#define Motor_PORT               PORTCbits.RC4
#define Motor_WPU                WPUCbits.WPUC4
#define Motor_OD                ODCONCbits.ODCC4
#define Motor_ANS                ANSELCbits.ANSC4
#define Motor_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define Motor_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define Motor_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define Motor_GetValue()           PORTCbits.RC4
#define Motor_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define Motor_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define Motor_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define Motor_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define Motor_SetPushPull()    do { ODCONCbits.ODCC4 = 0; } while(0)
#define Motor_SetOpenDrain()   do { ODCONCbits.ODCC4 = 1; } while(0)
#define Motor_SetAnalogMode()  do { ANSELCbits.ANSC4 = 1; } while(0)
#define Motor_SetDigitalMode() do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set Buzer aliases
#define Buzer_TRIS               TRISCbits.TRISC5
#define Buzer_LAT                LATCbits.LATC5
#define Buzer_PORT               PORTCbits.RC5
#define Buzer_WPU                WPUCbits.WPUC5
#define Buzer_OD                ODCONCbits.ODCC5
#define Buzer_ANS                ANSELCbits.ANSC5
#define Buzer_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define Buzer_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define Buzer_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define Buzer_GetValue()           PORTCbits.RC5
#define Buzer_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define Buzer_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define Buzer_SetPullup()      do { WPUCbits.WPUC5 = 1; } while(0)
#define Buzer_ResetPullup()    do { WPUCbits.WPUC5 = 0; } while(0)
#define Buzer_SetPushPull()    do { ODCONCbits.ODCC5 = 0; } while(0)
#define Buzer_SetOpenDrain()   do { ODCONCbits.ODCC5 = 1; } while(0)
#define Buzer_SetAnalogMode()  do { ANSELCbits.ANSC5 = 1; } while(0)
#define Buzer_SetDigitalMode() do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set IO1 aliases
#define IO1_TRIS               TRISCbits.TRISC6
#define IO1_LAT                LATCbits.LATC6
#define IO1_PORT               PORTCbits.RC6
#define IO1_WPU                WPUCbits.WPUC6
#define IO1_OD                ODCONCbits.ODCC6
#define IO1_ANS                ANSELCbits.ANSC6
#define IO1_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO1_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO1_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO1_GetValue()           PORTCbits.RC6
#define IO1_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO1_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO1_SetPullup()      do { WPUCbits.WPUC6 = 1; } while(0)
#define IO1_ResetPullup()    do { WPUCbits.WPUC6 = 0; } while(0)
#define IO1_SetPushPull()    do { ODCONCbits.ODCC6 = 0; } while(0)
#define IO1_SetOpenDrain()   do { ODCONCbits.ODCC6 = 1; } while(0)
#define IO1_SetAnalogMode()  do { ANSELCbits.ANSC6 = 1; } while(0)
#define IO1_SetDigitalMode() do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set IO2 aliases
#define IO2_TRIS               TRISCbits.TRISC7
#define IO2_LAT                LATCbits.LATC7
#define IO2_PORT               PORTCbits.RC7
#define IO2_WPU                WPUCbits.WPUC7
#define IO2_OD                ODCONCbits.ODCC7
#define IO2_ANS                ANSELCbits.ANSC7
#define IO2_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO2_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO2_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO2_GetValue()           PORTCbits.RC7
#define IO2_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO2_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO2_SetPullup()      do { WPUCbits.WPUC7 = 1; } while(0)
#define IO2_ResetPullup()    do { WPUCbits.WPUC7 = 0; } while(0)
#define IO2_SetPushPull()    do { ODCONCbits.ODCC7 = 0; } while(0)
#define IO2_SetOpenDrain()   do { ODCONCbits.ODCC7 = 1; } while(0)
#define IO2_SetAnalogMode()  do { ANSELCbits.ANSC7 = 1; } while(0)
#define IO2_SetDigitalMode() do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/