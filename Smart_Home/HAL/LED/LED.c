/*
 ================================================================================================================================
 * File Name   : LED.c
 * Module Name : LED
 * Created On  : Sep 6, 2023
 * Time 	   : 3:30:46 PM
 * Author Name : Ahmed Abd Egleel & Abdo Mohsen
 ================================================================================================================================
 */

/*******************************************************************************
 *                          Libraries and inclusions                           *
 *******************************************************************************/
#include "../../MCAL/GPIO/GPIO_Config.h"
#include"LED.h"


/*******************************************************************************
 *                              Functions Definitions                          *
 *******************************************************************************/

            /*---------- A function to initialize the LED ---------*/
void LED_init(void)
{
	GPIO_SetPinDirection(LED_PORT,LED_PIN,OUTPUT);		/*Make the LED pin output pin*/

	GPIO_SetPinValue(LED_PORT,LED_PIN,PIN_LOW);			/*Turn off the LED Initially*/
};

		   /*---------- A function to Turn ON the LED -------------*/
void LED_ON(void)
{
	GPIO_SetPinValue(LED_PORT,LED_PIN,PIN_HIGH);			/* Turn ON the LED */

};
		  /*---------- A function to Turn OFF the LED -------------*/
void LED_OFF(void)
{
	GPIO_SetPinValue(LED_PORT,LED_PIN,PIN_LOW);			/* Turn OFF the LED */

};
