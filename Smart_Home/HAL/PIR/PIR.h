/*
 ======================================================================
 *  File Name  : PIR.h
 *  Author     : ahmed helal
 *	User Name  : Abdel Rhman Helal
 ======================================================================
 */

#ifndef HAL_PIR_PIR_H_
#define HAL_PIR_PIR_H_

#define PIR_PORT PORT_D
#define PIR_PIN PIN7

void PIR_Init(void);

void PIR_Motion(uint8 *Motion);

#endif /* HAL_PIR_PIR_H_ */
