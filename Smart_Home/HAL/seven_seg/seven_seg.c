/*
 ======================================================================
 *  File Name  : 7seg.h
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
#include "seven_seg.h"
#include <util/delay.h>
void Seven_Seg_Init(void){
	GPIO_SetPinDirection(Seven_Seg_PORT,Seven_Seg_PIN0,OUTPUT);
	GPIO_SetPinDirection(Seven_Seg_PORT,Seven_Seg_PIN1,OUTPUT);
	GPIO_SetPinDirection(Seven_Seg_PORT,Seven_Seg_PIN2,OUTPUT);
	GPIO_SetPinDirection(Seven_Seg_PORT,Seven_Seg_PIN3,OUTPUT);
	GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN0,PIN_LOW);
	GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN1,PIN_LOW);
	GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN2,PIN_LOW);
	GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN3,PIN_LOW);
}
void Seven_Seg_Display(uint8 NUM){
	switch (NUM) {
		case 0:
			GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN0,PIN_LOW);
			GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN1,PIN_LOW);
			GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN2,PIN_LOW);
			GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN3,PIN_LOW);
			break;
		case 1:
			GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN0,PIN_HIGH);
				GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN1,PIN_LOW);
				GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN2,PIN_LOW);
				GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN3,PIN_LOW);
			break;
		case 2:
			GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN0,PIN_LOW);
				GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN1,PIN_HIGH);
				GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN2,PIN_LOW);
				GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN3,PIN_LOW);
			break;
		case 3:
			GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN0,PIN_HIGH);
				GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN1,PIN_HIGH);
				GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN2,PIN_LOW);
				GPIO_SetPinValue(Seven_Seg_PORT,Seven_Seg_PIN3,PIN_LOW);
			break;
		default:
			break;
	}
}

