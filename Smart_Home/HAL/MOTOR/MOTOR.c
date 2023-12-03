/*
 ============================================================================
 Name        : MOTOR.c
 Module Name : MOTOR
 Author      : Ahmed Ali
 Date        : 6 sept 2023
 ============================================================================
 */

#include "../../STD_TYPES.h"
#include "../../Comman_Macros.h"
#include "../../MCAL/TIMER0/TIMER0_Config.h"
#include "../../MCAL/TIMER0/TIMER0_Private.h"
#include "../../MCAL/GPIO/GPIO_Config.h"
#include "../../MCAL/GPIO/GPIO_Private.h"
#include "MOTOR.h"

void MOTOR_Init(void) {
	/* set the output pin for motor */
	GPIO_SetPinDirection(MOTOR_PORT, MOTOR_PIN, OUTPUT);
	/* configure the timer0 in fast PWM mode with pre-scaler 8 */
	TIMER0_Init(TIMER0_FAST_PWM_MODE, CLK_8_PRESCALER);
	/* configure the timer0 in non inverted mode */
	TIMER0_SetFastPwdMode(TIMER0PWM_NON_INVERTED);
	/* as default the motor is off */
	TIMER0_SetCompMatchValue(0);
}

void MOTOR_Speed(uint8 speed) {
	if (speed == 0) {
		/* motor is off */
		TIMER0_SetCompMatchValue(0);
	} else if (speed == 1) {
		/* first speed with duty cycle 33% */
		TIMER0_SetCompMatchValue(84);
	} else if (speed == 2) {
		/* first speed with duty cycle 75% */
		TIMER0_SetCompMatchValue(192);
	} else {
		/* first speed with duty cycle 100% */
		TIMER0_SetCompMatchValue(255);
	}
}
