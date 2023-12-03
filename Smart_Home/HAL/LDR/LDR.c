/*
 ================================================================================================================================
 * File Name   : LDR.c
 * Module Name : LDR
 * Created On  : Sep 6, 2023
 * Time 	   : 5:16:9 PM
 * Author Name : Ahmed Abd Egleel & Abdo Mohsen
 ================================================================================================================================
 */

/*******************************************************************************
 *                          Libraries and inclusions                           *
 *******************************************************************************/
#include "../../MCAL/ADC/ADC_Config.h"
#include "../../STD_TYPES.h"
#include"LDR.h"

/*******************************************************************************
 *                              Functions Definitions                          *
 *******************************************************************************/

/*---------- A function to read the Digital value Of LDR---------*/
void LDR_READ(uint8 *LDR_Precentage) {
	uint16 digital_value = ADC_ReadChannelConversionResult(LDR_PIN);
	*LDR_Precentage = ((200 - digital_value) * 100) / 200;
}

