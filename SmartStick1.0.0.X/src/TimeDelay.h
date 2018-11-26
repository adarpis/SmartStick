/**
  TimeDelay Header File

  @Company
    PrototypeIDI.

  @File Name
    TimeDelay.h

  @Summary
    This is the header file for time and delay generic non blocking routines using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for time and delay routines.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65
        Device            :  PIC16LF15344
        Driver Version    :  1.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.10
 */

#ifndef TIMEDELAY_H
#define	TIMEDELAY_H


/**
  Section: Included Files
 */
//#include "../mcc_generated_files/mcc.h"


#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif

    /**
      Section: Macro Declarations
     */
    //#define FOO  (foo.var)
#define SAFETY_MLOOP_TIME 400

    /**
      Section: Data Type Definitions
     */
    typedef enum {
        TIMEDELAY_STATES_INIT = 0,
        TIMEDELAY_STATES_IDLE,
        TIMEDELAY_STATES_ERROR,
    } TIMEDELAY_STATES;

    typedef struct {
        TIMEDELAY_STATES state;
    } TIMEDELAY_DATA;

    typedef struct {
        unsigned int delay;
        unsigned int down;
        unsigned int up;
        unsigned char status : 1;
        unsigned char reset : 1;
    } vTimer;

    /**
     Section: Global variables
     */
    TIMEDELAY_DATA TimeDelay_Data;

    /**
      Section: Timer Delay APIs
     */

    /**
      @Summary
        Initialization routine that reset ticks interrupt counter.

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
    void TimeDelay_Initialize(void);

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
    void TimeDelay_Tasks(void);

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
    unsigned char NonBlockingDelay(vTimer *vTimer);

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
    void TimeDelay_Reset (vTimer *vTimer);
    
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
    void TimeDelay_Set (vTimer *vTimer, unsigned int delay);
    
#ifdef __cplusplus  // Provide C++ Compatibility
}
#endif

#endif  // _TIMEDELAY_H
/**
 End of File
 */