/*
 ================================================================================================================================
 * File Name   : BUZZER.c
 * Module Name : BUZZER
 * Created On  : Sep 6, 2023
 * Time 	   : 4:30:13 PM
 * Author Name : Ahmed Abd Egleel & Abdo Mohsen
 ================================================================================================================================
 */

/*******************************************************************************
 *                          Libraries and inclusions                           *
 *******************************************************************************/
#include"../../MCAL/GPIO/GPIO_Config.h"
#include"BUZZER.h"

/*******************************************************************************
 *                              Functions Definitions                          *
 *******************************************************************************/

            /*---------- A function to initialize the Buzzer ---------*/
void BUZZER_init (void)
{
	 GPIO_SetPinDirection(BUZZER_PORT,BUZZER_PIN,OUTPUT);		/*Make the LED pin output pin*/
	 GPIO_SetPinValue(BUZZER_PORT,BUZZER_PIN,PIN_LOW);			/*Turn off the Buzzer Initially*/
};

			/*---------- A function to Turn On the Buzzer ---------*/
void BUZZER_ON(void)
{
	GPIO_SetPinValue(BUZZER_PORT,BUZZER_PIN,PIN_HIGH);			/* Turn On the Buzzer */
};

		   /*---------- A function to Turn ON the Buzzer ---------*/
void BUZZER_OFF(void)
{
	GPIO_SetPinValue(BUZZER_PORT,BUZZER_PIN,PIN_LOW);			/* Turn OFF the Buzzer */
};
