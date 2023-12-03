/*
 ============================================================================
 Name        : GIE.c
 Module Name : Global Interrupt
 Author      : Ahmed Ali
 Date        : 26 Aug 2023
 ============================================================================
 */

#include "../../STD_TYPES.h"
#include "../../Comman_Macros.h"
#include "GIE_Config.h"
#include "GIE_Private.h"

void GIE_Enable() {
	/* set I bit in status register I = 1 (the global interrupt is enabled) */
	SET_BIT(SREG, SREG_I);
}

void GIE_Disable() {
	/* reset I bit in status register I = 0 (the global interrupt is disabled) */
	CLEAR_BIT(SREG, SREG_I);
}

