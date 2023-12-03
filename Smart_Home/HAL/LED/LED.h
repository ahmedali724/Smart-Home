/*
 ================================================================================================================================
 * File Name   : LED.h
 * Module Name : LED
 * Created On  : Sep 6, 2023
 * Time 	   : 3:25:16 PM
 * Author Name : Ahmed Abd Egleel and Abdo Mohsen
 ================================================================================================================================
 */
#ifndef HAL_LED_LED_H_
#define HAL_LED_LED_H_

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define LED_PORT  	PORT_D
#define LED_PIN  	PIN0

/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/
void LED_init (void);				  	/* A function to initialize the LED */

void LED_ON(void);						/* A function to turn ON the RED_LED */

void LED_OFF(void);						/* A function to turn OFF the RED_LED */

#endif /* HAL_LED_LED_H_ */
