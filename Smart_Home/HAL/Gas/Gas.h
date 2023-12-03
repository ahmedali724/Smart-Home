/*
 ======================================================================
 *  File Name  : Gas.h
 *  Author     : ahmed helal
 *	User Name  : Abdel Rhman Helal
 ======================================================================
 */

#ifndef HAL_GAS_GAS_H_
#define HAL_GAS_GAS_H_

#define GAS_PORT PORT_D
#define GAS_PIN PIN6

void GAS_Init(void);

void GAS_Detection(uint8 *Gas);

#endif /* HAL_GAS_GAS_H_ */
