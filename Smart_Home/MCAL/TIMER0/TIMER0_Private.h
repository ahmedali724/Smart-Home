/*
 ============================================================================
 Name        : TIMER0_Private.h
 Module Name : TIMER0
 Author      : Ahmed Ali
 Date        : 27 Aug 2023
 ============================================================================
 */
#include "../../STD_TYPES.h"

#ifndef TIMER0_PRIVATE_H_
#define TIMER0_PRIVATE_H_

/* timer/counter register 0 */
#define TCNT0 *((volatile uint8*) 0x52)
/* timer/counter control register 0 */
#define TCCR0 *((volatile uint8*) 0x53)
/* output compare register 0 */
#define OCR0  *((volatile uint8*) 0x5C)
/* timer/counter interrupt mask register */
#define TIMSK *((volatile uint8*) 0x59)

#endif /* TIMER0_PRIVATE_H_ */
