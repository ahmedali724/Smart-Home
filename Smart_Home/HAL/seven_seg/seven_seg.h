/*
 ======================================================================
 *  File Name  : 7seg.h
 *  Author     : ahmed helal
 *	User Name  : Abdel Rhman Helal
 ======================================================================
 */
#ifndef HAL_SEVEN_SEG_SEVEN_SEG_H_
#define HAL_SEVEN_SEG_SEVEN_SEG_H_

#define Seven_Seg_PORT PORT_A
#define Seven_Seg_PIN0 PIN4
#define Seven_Seg_PIN1 PIN5
#define Seven_Seg_PIN2 PIN6
#define Seven_Seg_PIN3 PIN7

void Seven_Seg_Init(void);
void Seven_Seg_Display(uint8 NUM);

#endif /* HAL_SEVEN_SEG_SEVEN_SEG_H_ */
