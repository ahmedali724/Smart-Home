/*
 ============================================================================
 Name        : ADC.c
 Module Name : ADC
 Author      : Ahmed Ali
 Date        : 26 Aug 2023
 ============================================================================
 */

#include "../../STD_TYPES.h"
#include "../../Comman_Macros.h"
#include "ADC_Config.h"
#include "ADC_Private.h"

void ADC_Init(void) {
	/* internal 2.56V voltage reference */
	SET_BIT(ADMUX, ADMUX_REFS0);
	SET_BIT(ADMUX, ADMUX_REFS1);

	/* active right adjust*/
	CLEAR_BIT(ADMUX, ADMUX_ADLAR);

	/* ADC clock pre-scaler */
	SET_BIT(ADCSRA, ADCSRA_ADPS2);
	SET_BIT(ADCSRA, ADCSRA_ADPS1);
	SET_BIT(ADCSRA, ADCSRA_ADPS0);

	/* enable ADC */
	SET_BIT(ADCSRA, ADCSRA_ADEN);
}

uint16 ADC_ReadChannelConversionResult(uint8 uint8Channel) {
	/* clear the MUX bits */
	ADMUX &= 0xE0;

	/* Set the required channel into MUX */
	ADMUX |= uint8Channel;

	/* start conversion */
	SET_BIT(ADCSRA, ADCSRA_ADSC);

	/* polling until the conversion flag is set */
	while ((GET_BIT(ADCSRA, ADCSRA_ADIF)) == 0)
		;

	/* clear the conversion flag */
	SET_BIT(ADCSRA, ADCSRA_ADIF);

	/* return the conversion result */
	return ADCL_H;
}
