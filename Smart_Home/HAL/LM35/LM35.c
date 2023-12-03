/*
 ======================================================================
 *  File Name  : LM35.c
 *  Author     : ahmed helal
 *	User Name  : Abdel Rhman Helal
 ======================================================================
 */

#include "../../STD_TYPES.h"
#include "../../Comman_Macros.h"
#include "../../MCAL/GPIO/GPIO_Private.h"
#include "../../MCAL/GPIO/GPIO_Config.h"
#include "../../MCAL/ADC/ADC_Private.h"
#include "../../MCAL/ADC/ADC_Config.h"
#include "LM35.h"

void LM35_Read(uint8 *Temperture) {
	uint16 Adc_value;
	Adc_value = ADC_ReadChannelConversionResult(LM_35_CH);
	*Temperture = ((Adc_value * 2.56 * 100) / 1023);
}

