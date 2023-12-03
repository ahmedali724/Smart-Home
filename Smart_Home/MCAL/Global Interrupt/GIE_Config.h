/*
 ============================================================================
 Name        : GIE_Config.h
 Module Name : Global Interrupt
 Author      : Ahmed Ali
 Date        : 26 Aug 2023
 ============================================================================
 */

#ifndef GIE_CONFIG_H_
#define GIE_CONFIG_H_

/* ==============================CONFIGURATION=============================== */

/* the I bit define in status register */
#define SREG_I 7

/* ================================FUNCTIONS================================== */

/* function to enable global interrupt  */
void GIE_Enable();

/* function to disable global interrupt  */
void GIE_Disable();

#endif /* GIE_CONFIG_H_ */
