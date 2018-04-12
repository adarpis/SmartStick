/**
  Keyboard Header File

  @Company
    PrototypeIDI.

  @File Name
    Keyboard.h

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

#ifndef KEYBOARD_H
#define	KEYBOARD_H


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
        KEYBOARD_STATES_INIT = 0,
        KEYBOARD_STATES_IDLE,
        KEYBOARD_STATES_ERROR,
    } KEYBOARD_STATES;

    typedef struct {
        KEYBOARD_STATES state;
    } KEYBOARD_DATA;

    /**
     Section: Global variables
     */
    KEYBOARD_DATA Keyboard_Data;

    /**
      Section: Keyboard APIs
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
    void Keyboard_Initialize(void);

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
    void Keyboard_Tasks(void);


#ifdef __cplusplus  // Provide C++ Compatibility
}
#endif

#endif  // _KEYBOARD_H
/**
 End of File
 */
