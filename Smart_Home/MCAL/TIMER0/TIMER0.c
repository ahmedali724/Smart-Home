/*
 ============================================================================
 Name        : TIMER0.c
 Module Name : TIMER0
 Author      : Ahmed Ali
 Date        : 27 Aug 2023
 ============================================================================
 */

#include "../../STD_TYPES.h"
#include "../../Comman_Macros.h"
#include "TIMER0_Config.h"
#include "TIMER0_Private.h"

void TIMER0_Init(uint8 timer0Mode, uint8 time0Prescaler) {
	/* choose the timer modes */
	switch (timer0Mode) {
	case TIMER0_NORMAL_MODE:
		/* normal mode => (WGM00 = 0 and WGM01 = 0) */
		CLEAR_BIT(TCCR0, TCCR0_WGM00);
		CLEAR_BIT(TCCR0, TCCR0_WGM01);
		break;
	case TIMER0_CTC_MODE:
		/* CTC mode => (WGM00 = 0 and WGM01 = 1) */
		CLEAR_BIT(TCCR0, TCCR0_WGM00);
		SET_BIT(TCCR0, TCCR0_WGM01);
		break;
	case TIMER0_PHASE_CORRECT_MODE:
		/* phase correct mode => (WGM00 = 1 and WGM01 = 0) */
		SET_BIT(TCCR0, TCCR0_WGM00);
		CLEAR_BIT(TCCR0, TCCR0_WGM01);
		break;
	case TIMER0_FAST_PWM_MODE:
		/* fast PWM mode => (WGM00 = 1 and WGM01 = 1) */
		SET_BIT(TCCR0, TCCR0_WGM00);
		SET_BIT(TCCR0, TCCR0_WGM01);
		break;
	}
	/* to make sure that the pres-caler bits is zero */
	TCCR0 &= 0xF8;
	/* put pre-scaler value in its bits */
	TCCR0 |= time0Prescaler;
}

void TIMER0_InterruptEnable(void) {
	/* enable timer interrupt => (TOIE0 = 1) */
	SET_BIT(TIMSK, TIMSK_TOIE0);
}
void TIMER0_InterruptDisable(void) {
	/* disable timer interrupt => (TOIE0 = 0) */
	CLEAR_BIT(TIMSK, TIMSK_TOIE0);
}

void TIMER0_SetCompMatchValue(uint8 value) {
	/* store the value in OCR0 register */
	OCR0 = value;
}

void TIMER0_SetFastPwdMode(uint8 timer0PwmMode) {
	/* choose the fast PWM modes */
	switch (timer0PwmMode) {
	case TIMER0PWM_INVERTED:
		/* set on top, clear on compare match */
		SET_BIT(TCCR0, TCCR0_COM00);
		SET_BIT(TCCR0, TCCR0_COM01);
		break;
	case TIMER0PWM_NON_INVERTED:
		/* set on compare match, clear on top */
		CLEAR_BIT(TCCR0, TCCR0_COM00);
		SET_BIT(TCCR0, TCCR0_COM01);
		break;
	}
}

