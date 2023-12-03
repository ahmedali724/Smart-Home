/*
 ============================================================================
 Name        : EXT_Private.h
 Module Name : External Interrupt
 Author      : Ahmed Ali
 Date        : 26 Aug 2023
 ============================================================================
 */
#include "../../STD_TYPES.h"

#ifndef EXT_PRIVATE_H_
#define EXT_PRIVATE_H_

/* define GICR address in memory mapped registers */
#define GICR *((volatile uint8*) 0x5B)

/* define GIFR address in memory mapped registers */
#define GIFR *((volatile uint8*) 0x5A)

/* define MCUCR address in memory mapped registers */
#define MCUCR *((volatile uint8*) 0x55)

/* define MCUCSR address in memory mapped registers */
#define MCUCSR *((volatile uint8*) 0x54)

#endif /* EXT_PRIVATE_H_ */
