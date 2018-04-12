/**
  Generic Header File

  @Company
    PrototypeIDI.

  @File Name
    Generic.h

  @Summary
    This is the header file for generic using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for generic routines.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65
        Device            :  PIC16LF15344
        Version    :  1.00
    The generated APIs are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.10
 */

#ifndef GENERIC_H
#define	GENERIC_H


/**
  Section: Included Files
 */


#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif

    /**
      Section: Macro Declarations
     */
    //#define FOO  (foo.var)

    /**
      Section: Data Type Definitions
     */
    typedef enum {
        GENERIC_STATES_INIT = 0,
        GENERIC_STATES_IDLE,
        GENERIC_STATES_ERROR,
    } GENERIC_STATES;

    typedef struct {
        GENERIC_STATES state;
    } GENERIC_DATA;

    /**
     Section: Global variables
     */
    GENERIC_DATA Generic_Data;

    /**
      Section: Generic APIs
     */

    /**
      @Summary
        Initialization routine generic.

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
    void Generic_Initialize(void);

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
    void Generic_Tasks(void);


#ifdef __cplusplus  // Provide C++ Compatibility
}
#endif

#endif  // _GENERIC_H
/**
 End of File
 */
