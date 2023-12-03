/*
 ============================================================================
 Name        : main.c
 Module Name : the main function
 Author      : Ahmed Ali & Abdel-Rahman Helal & Ahmed Abdel-Gleel & Abdel-Rahman Mohsen
 Date        : 5 sept 2023
 ============================================================================
 */

#include "MCAL/ADC/ADC_Config.h"
#include "MCAL/External Interrupt/EXT_Config.h"
#include "MCAL/GPIO/GPIO_Config.h"
#include "MCAL/Global Interrupt/GIE_Config.h"
#include "MCAL/TIMER0/TIMER0_Config.h"
#include "HAL/LCD/LCD.h"
#include "HAL/KEYPAD/KEYPAD.h"
#include "HAL/MOTOR/MOTOR.h"
#include "HAL/LM35/LM35.h"
#include "HAL/LDR/LDR.h"
#include "HAL/Buzzer/BUZZER.h"
#include "HAL/seven_seg/seven_seg.h"
#include "HAL/PIR/PIR.h"
#include "HAL/Fire/Fire.h"
#include "HAL/Gas/Gas.h"
#include "Comman_Macros.h"
#include "STD_TYPES.h"
#include <util/delay.h>

int main(void) {
	uint8 temp, check_password = 0, password_try = 3;
	uint8 user_password[4];
	LCD_Init();
	KPD_Init();
	ADC_Init();
	Seven_Seg_Init();
	MOTOR_Init();
	BUZZER_init();
	PIR_Init();
	FIRE_Init();
	GAS_Init();
	while (check_password == 0 && password_try != 0) {
		uint8 password_index = 0;
		if (password_try == 3) {
			LCD_DisplayString("Enter Password: ");
			LCD_MoveCursor(1, 0);
		} else {
			LCD_DisplayString("Try Again: ");
			LCD_MoveCursor(1, 0);
		}
		while (password_index < 4) {
			temp = KPD_GetPressedKey();
			while (temp == KPD_NO_PRESSED_KEY) {
				temp = KPD_GetPressedKey();
			}
			LCD_SendData('*');
			user_password[password_index] = temp;
			password_index++;
		}
		if (user_password[0] == '1' && user_password[1] == '2'
				&& user_password[2] == '3' && user_password[3] == '4') {
			check_password = 1;
			break;
		} else {
			LCD_ClearScreen();
			password_try--;
		}
	}
	if (check_password) {
		uint8 analogTemp, temproray1, speed, analogLDR, temproray2;
		uint8 flagPIR = 0, flagFIRE = 0, flagGAS = 0;
		uint8 PIR, GAS, FIRE;
		LCD_ClearScreen();
		LCD_DisplayString("Welcome :)");
		_delay_ms(50);
		LCD_ClearScreen();
		while (1) {
			GPIO_GetPinValue(PORT_D, PIN5, &FIRE);
			if (FIRE) {
				flagFIRE = 1;
			} else {
				flagFIRE = 0;
			}
			GPIO_GetPinValue(PORT_D, PIN6, &GAS);
			if (GAS) {
				flagGAS = 1;
			} else {
				flagGAS = 0;
			}
			GPIO_GetPinValue(PORT_D, PIN7, &PIR);
			if (PIR) {
				flagPIR = 1;
			} else {
				flagPIR = 0;
			}
			if (flagPIR) {
				GPIO_SetPinValue(PORT_A, PIN2, PIN_HIGH);
			} else {
				GPIO_SetPinValue(PORT_A, PIN2, PIN_LOW);
			}
			if (flagFIRE || flagGAS) {
				while (flagFIRE) {
					LCD_ClearScreen();
					LCD_DisplayString("*FLAME Detected*");
					LCD_MoveCursor(1, 0);
					LCD_DisplayString("****************");
					BUZZER_ON();
					_delay_ms(25);
					BUZZER_OFF();
					GPIO_GetPinValue(PORT_D, PIN5, &FIRE);
					if (FIRE) {
						flagFIRE = 1;
					} else {
						flagFIRE = 0;
					}
				}
				while (flagGAS) {
					LCD_ClearScreen();
					LCD_DisplayString("**GAS Detected**");
					LCD_MoveCursor(1, 0);
					LCD_DisplayString("****************");
					BUZZER_ON();
					_delay_ms(25);
					BUZZER_OFF();
					GPIO_GetPinValue(PORT_D, PIN6, &GAS);
					if (GAS) {
						flagGAS = 1;
					} else {
						flagGAS = 0;
					}
					GPIO_GetPinValue(PORT_D, PIN5, &FIRE);
					if (FIRE) {
						flagFIRE = 1;
						break;
					} else {
						flagFIRE = 0;
					}
				}
				LCD_ClearScreen();
				LCD_DisplayString("LDR: ");
				LCD_NumberToString(analogLDR);
				LCD_SendData('%');
				LCD_MoveCursor(1, 0);
				LCD_DisplayString("Temperature: ");
				LCD_NumberToString(analogTemp);
			}
			temproray1 = analogTemp;
			LM35_Read(&analogTemp);
			temproray2 = analogLDR;
			LDR_READ(&analogLDR);
			if (temproray1 != analogTemp || temproray2 != analogLDR) {
				LCD_ClearScreen();
				LCD_DisplayString("Temperature: ");
				LCD_NumberToString(analogTemp);
				LCD_MoveCursor(1, 0);
				LCD_DisplayString("LDR: ");
				LCD_NumberToString(analogLDR);
				LCD_SendData('%');
			}
			if (analogTemp < 25) {
				speed = 0;
				Seven_Seg_Display(speed);
				MOTOR_Speed(speed);
			} else if (analogTemp < 30) {
				speed = 1;
				Seven_Seg_Display(speed);
				MOTOR_Speed(speed);
			} else if (analogTemp < 35) {
				speed = 2;
				Seven_Seg_Display(speed);
				MOTOR_Speed(speed);
			} else {
				speed = 3;
				Seven_Seg_Display(speed);
				MOTOR_Speed(speed);
			}
			if (analogLDR <= 50) {
				GPIO_SetPinValue(PORT_D, PIN1, PIN_HIGH);
			} else {
				GPIO_SetPinValue(PORT_D, PIN1, PIN_LOW);
			}
		}
	} else {
		LCD_DisplayString("Good Bye :(");
		BUZZER_ON();
		_delay_ms(50);
		BUZZER_OFF();
	}
}
