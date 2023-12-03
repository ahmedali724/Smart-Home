/*
 ======================================================================
 *  File Name  : PIR.c
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
#include "PIR.h"

void PIR_Init(void) {
	// input pin
	GPIO_SetPinDirection(PIR_PORT, PIR_PIN, INPUT);
	// output LED
	GPIO_SetPinDirection(PORT_A, PIN2, OUTPUT);
}

void PIR_Motion(uint8 *Motion) {
	//check if pin == 1 or  = 0
	uint8 L_Motion = *Motion;
	GPIO_GetPinValue(PIR_PORT, PIR_PIN, &L_Motion);
	if (L_Motion == 1) {
		*Motion = 1;
	} else {
		*Motion = 0;
	}
}

