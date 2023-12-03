/*
 ================================================================================================================================
 * File Name   : BUZZER.H
 * Module Name : BUZZER
 * Created On  : Sep 6, 2023
 * Time 	   : 4:16:45 PM
 * Author Name : Ahmed Abd Egleel & Abdo Mohsen
 ================================================================================================================================
 */
#ifndef HAL_BUZZER_BUZZER_H_
#define HAL_BUZZER_BUZZER_H_

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define  BUZZER_PORT  PORT_D
#define  BUZZER_PIN   PIN0

/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/

void BUZZER_init(void); /* Function to initialize the buzzer */

void BUZZER_ON(void); /* Function to Turn On the buzzer */

void BUZZER_OFF(void); /* Function to Turn OFF the buzzer */

#endif /* HAL_BUZZER_BUZZER_H_ */
