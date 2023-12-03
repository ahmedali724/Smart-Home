/*
 ============================================================================
 Name        : MOTOR.h
 Module Name : MOTOR
 Author      : Ahmed Ali
 Date        : 6 sept 2023
 ============================================================================
 */

#include "../../STD_TYPES.h"

#ifndef HAL_MOTOR_MOTOR_H_
#define HAL_MOTOR_MOTOR_H_

#define MOTOR_PORT PORT_B
#define MOTOR_PIN PIN3

void MOTOR_Init(void);

void MOTOR_Speed(uint8 speed);

#endif /* HAL_MOTOR_MOTOR_H_ */
