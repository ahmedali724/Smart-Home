/*
 ============================================================================
 Name        : ADC_Private.h
 Module Name : ADC
 Author      : Ahmed Ali
 Date        : 26 Aug 2023
 ============================================================================
 */
#include "../../STD_TYPES.h"

#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_

/* define ADMUX address in memory mapped registers */
#define ADMUX *((volatile uint8*) 0x27)

/* define ADCSRA address in memory mapped registers */
#define ADCSRA *((volatile uint8*) 0x26)

/* define ADCH address in memory mapped registers */
#define ADCL_H *((volatile uint16*) 0x24)

#endif /* ADC_PRIVATE_H_ */
