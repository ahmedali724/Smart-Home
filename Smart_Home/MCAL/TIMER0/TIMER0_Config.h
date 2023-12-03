/*
 ============================================================================
 Name        : TIMER0_Config.h
 Module Name : TIMER0
 Author      : Ahmed Ali
 Date        : 27 Aug 2023
 ============================================================================
 */

#include "../../STD_TYPES.h"

#ifndef TIMER0_CONFIG_H_
#define TIMER0_CONFIG_H_

/* ==============================CONFIGURATION=============================== */

/* pre-scaler bit0 */
#define TCCR0_CS00 0
/* pre-scaler bit1 */
#define TCCR0_CS01 1
/* pre-scaler bit2 */
#define TCCR0_CS02 2
/* waveform generation mode bit1 */
#define TCCR0_WGM01 3
/* waveform generation mode bit0 */
#define TCCR0_WGM00 6

/* normal mode 0 interrupt enable */
#define TIMSK_TOIE0 0
/* output compare mode 0 interrupt enable */
#define TIMSK_OCIE0 1

/* inverted or non inverted mode for fast PWM */
#define TCCR0_COM00 4
#define TCCR0_COM01 5

/* timer 4 modes */
#define TIMER0_NORMAL_MODE        0
#define TIMER0_PHASE_CORRECT_MODE 1
#define TIMER0_CTC_MODE           2
#define TIMER0_FAST_PWM_MODE      3

/* pre-scaler options */
#define NO_CLOCK_SOURCE             0
#define NO_PRESCALING               1
#define CLK_8_PRESCALER             2
#define CLK_64_PRESCALER            3
#define CLK_256_PRESCALER           4
#define CLK_1024_PRESCALER          5
#define EXTERNAL_CLOCK_FALLING_EDGE 6
#define EXTERNAL_CLOCK_RISING_EDGE  7

/* fast PWM options */
#define TIMER0PWM_INVERTED     0
#define TIMER0PWM_NON_INVERTED 1

/* ================================FUNCTIONS================================== */

/* function to initialization the timer with selected mode and pre-scaler */
void TIMER0_Init(uint8 timer0Mode, uint8 time0Prescaler);

/* function to set the compare match value for CTC mode */
void TIMER0_SetCompMatchValue(uint8 value);

/* function to set the fast PWM mode */
void TIMER0_SetFastPwdMode(uint8 timer0PwmMode);

/* function to enable interrupt for timer0 */
void TIMER0_InterruptEnable(void);

/* function to disable interrupt for timer0 */
void TIMER0_InterruptDisable(void);

#endif /* TIMER0_CONFIG_H_ */
