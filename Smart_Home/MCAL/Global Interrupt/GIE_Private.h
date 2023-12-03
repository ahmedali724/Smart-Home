/*
 ============================================================================
 Name        : GIE_Private.h
 Module Name : Global Interrupt
 Author      : Ahmed Ali
 Date        : 26 Aug 2023
 ============================================================================
 */
#include "../../STD_TYPES.h"

#ifndef GIE_PRIVATE_H_
#define GIE_PRIVATE_H_

/* define SREG address in memory mapped registers */
#define SREG *((volatile uint8*) 0x5F)

#endif /* GIE_PRIVATE_H_ */
