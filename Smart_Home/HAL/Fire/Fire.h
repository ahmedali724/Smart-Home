/*
 * Fire.h
 *
 *  Created on: Sep 8, 2023
 *      Author: ahmed helal
 */

#ifndef HAL_FIRE_FIRE_H_
#define HAL_FIRE_FIRE_H_

#define FIRE_PORT PORT_D
#define FIRE_PIN PIN5

void FIRE_Init(void);

void FIRE_Motion(uint8 *Motion);

#endif /* HAL_FIRE_FIRE_H_ */
