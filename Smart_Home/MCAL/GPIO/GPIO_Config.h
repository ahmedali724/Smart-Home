/*
 ============================================================================
 Name        : GPIO_Config.h
 Module Name : GPIO
 Author      : Ahmed Ali
 Date        : 17 Aug 2023
 ============================================================================
 */
#include "../../STD_TYPES.h"

#ifndef GPIO_CONFIG_H_
#define GPIO_CONFIG_H_

/* ==============================CONFIGURATION=============================== */

/* define ports number */
#define PORT_A 0
#define PORT_B 1
#define PORT_C 2
#define PORT_D 3

/* define pins number */
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

/* define port/pin direction */
#define INPUT  0
#define OUTPUT 1

/* define port/pin status */
#define PIN_LOW  0
#define PIN_HIGH 1

/* ================================FUNCTIONS================================== */

/* Setting pin direction */
void GPIO_SetPinDirection(uint8 uint8_port, uint8 uint8_pin,
		uint8 uint8_direction);

/* Setting pin value */
void GPIO_SetPinValue(uint8 uint8_port, uint8 uint8_pin, uint8 uint8_value);

/* getting Pin value */
void GPIO_GetPinValue(uint8 uint8_port, uint8 uint8_pin, uint8 *p_uint8_data);

/* setting port direction */
void GPIO_SetPortDirection(uint8 uint8_port, uint8 uint8_direction);

/* setting port value */
void GPIO_SetPortValue(uint8 uint8_port, uint8 uint8_value);

/* getting port value */
void GPIO_GetPortValue(uint8 uint8_port, uint8 *p_uint8_data);

#endif /* GPIO_CONFIG_H_ */
