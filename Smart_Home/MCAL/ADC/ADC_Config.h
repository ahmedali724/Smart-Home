/*
 ============================================================================
 Name        : ADC_Config.h
 Module Name : ADC
 Author      : Ahmed Ali
 Date        : 26 Aug 2023
 ============================================================================
 */
#include "../../STD_TYPES.h"

#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_

/* ==============================CONFIGURATION=============================== */

/* ADMUX reference selection bit */
#define ADMUX_REFS1 7
#define ADMUX_REFS0	6
/* ADMUX adjust right */
#define ADMUX_ADLAR	5

/* ADCSRA ADC enable */
#define ADCSRA_ADEN	7
/* ADCSRA start conversion */
#define ADCSRA_ADSC	6
/* ADCSRA auto trigger interrupt */
#define ADCSRA_ASTE	5
/* ADCSRA interrupt flag */
#define ADCSRA_ADIF	4
/* ADCSRA interrupt enable */
#define ADCSRA_ADIE 3
/* ADCSRA clock pre-scaler */
#define ADCSRA_ADPS2 2
#define ADCSRA_ADPS1 1
#define ADCSRA_ADPS0 0

/* pre-scaler */
#define PRE_SCALER_VALUE  128

/* ================================FUNCTIONS================================== */

/* channel number */
#define CH_0 0
#define CH_1 1
#define CH_2 2
#define CH_3 3
#define CH_4 4
#define CH_5 5
#define CH_6 6
#define CH_7 7

/* function to initialization ADC */
void ADC_Init(void);

/* function to get the channel number and return the result of conversion */
uint16 ADC_ReadChannelConversionResult(uint8 uint8Channel);

#endif /* ADC_CONFIG_H_ */
