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
#include "FingerPrint.h"
#include <util/delay.h>

void FingerPrint_Init(void) {
	//input pin
	//CLEAR_BIT(FingerPrint_DDR,FingerPrint_PIN_NUM);
	GPIO_SetPinDirection(FingerPrint_PORT, FingerPrint_PIN, INPUT);
}

void FingerPrint_status(uint8 *status) {
	//check if pin == 1 or  = 0
	uint8 L_stat = *status;
	GPIO_GetPinValue(FingerPrint_PORT, FingerPrint_PIN, &L_stat);
	if (L_stat) {
		*status = 1;
	} else {
		*status = 0;
	}
}
