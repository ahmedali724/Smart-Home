/*
 ======================================================================
 *  File Name  : Gas.c
 *  Author     : ahmed helal
 *	User Name  : Abdel Rhman Helal
 ======================================================================
 */

#include "../../STD_TYPES.h"
#include "../../Comman_Macros.h"
#include "../../MCAL/GPIO/GPIO_Private.h"
#include "../../MCAL/GPIO/GPIO_Config.h"
#include "../../MCAL/External Interrupt/EXT_Private.h"
#include "../../MCAL/External Interrupt/EXT_Config.h"
#include "../../MCAL/Global Interrupt/GIE_Config.h"
#include "Gas.h"

void GAS_Init(void) {
	// input pin
	GPIO_SetPinDirection(GAS_PORT, GAS_PIN, INPUT);
}

void GAS_Motion(uint8 *Gas) {
	//check if pin == 1 or  = 0
	uint8 L_Gas = *Gas;
	GPIO_GetPinValue(GAS_PORT, GAS_PIN, &L_Gas);
	if (L_Gas == 1) {
		*Gas = 1;
	} else {
		*Gas = 0;
	}
}
