/**
  SENSOR_MB1040 Driver API Header File

  @Company
    PrototypeIDI.

  @File Name
    Sensor_MB1040.h

  @Summary
    This is the header file for the SENSOR_MB1040 driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for SENSOR_MB1040.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65
        Device            :  PIC16LF15344
        Driver Version    :  1.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.10
 */

#ifndef SENSOR_MB1040_H
#define	SENSOR_MB1040_H


/**
  Section: Included Files
 */


#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif

    /**
      Section: Macro Declarations
     */

    //#define EUSART2_DataReady  (PIR3bits.RC2IF)

    /**
      Section: Data Type Definitions
     */
    typedef enum {
        MB1040_STATES_INIT = 0,
        MB1040_STATES_IDLE,
        MB1040_STATES_ERROR,
    } MB1040_STATES;

    typedef struct {
        MB1040_STATES state;
    } MB1040_DATA;

    /**
     Section: Global variables
     */
    MB1040_DATA MB1040_Data;

    /**
      Section: EUSART2 APIs
     */

    /**
      @Summary
        Initialization routine that takes inputs from the SENSOR_MB104.

      @Description
        This routine initializes the SENSOR_MB1040 driver.
        This routine must be called before any other SENSOR_MB1040 routine is called.

      @Preconditions
        None

      @Param
        None

      @Returns
        None

      @Comment
    
     */
    void MB1040_Initialize(void);

    /**
    @Summary
      Initialization routine that takes inputs from the SENSOR_MB104.

    @Description
      This routine initializes the SENSOR_MB1040 driver.
      This routine must be called before any other SENSOR_MB1040 routine is called.

    @Preconditions
      None

    @Param
      None

    @Returns
      None

    @Comment
    
     */
    void MB1040_Tasks(void);


#ifdef __cplusplus  // Provide C++ Compatibility
}
#endif

#endif  // _SENSOR_MB1040_H
/**
 End of File
 */

