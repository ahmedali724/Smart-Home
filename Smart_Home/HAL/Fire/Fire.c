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
#include "Fire.h"

void FIRE_Init(void) {
	//input pin
	GPIO_SetPinDirection(FIRE_PORT, FIRE_PIN, INPUT);
}

void FIRE_Motion(uint8 *Status) {
	//check if pin == 1 or  = 0
	uint8 L_Status = *Status;
	GPIO_GetPinValue(FIRE_PORT, FIRE_PIN, &L_Status);
	if (L_Status == 1) {
		*Status = 1;
	} else {
		*Status = 0;
	}
}

