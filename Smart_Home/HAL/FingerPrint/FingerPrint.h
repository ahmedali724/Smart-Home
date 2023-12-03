/*
 ======================================================================
 *  File Name  : LM35.c
 *  Author     : ahmed helal
 *	User Name  : Abdel Rhman Helal
 ======================================================================
 */

#ifndef HAL_FINGERPRINT_FINGERPRINT_H_
#define HAL_FINGERPRINT_FINGERPRINT_H_

#define FingerPrint_PORT PORT_B
#define FingerPrint_PIN PIN7

void FingerPrint_Init(void);
void FingerPrint_status(uint8 * status);

#endif /* HAL_FINGERPRINT_FINGERPRINT_H_ */
