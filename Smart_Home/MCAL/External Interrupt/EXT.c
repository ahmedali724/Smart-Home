/*
 ============================================================================
 Name        : EXT.c
 Module Name : External Interrupt
 Author      : Ahmed Ali
 Date        : 26 Aug 2023
 ============================================================================
 */

#include "../../STD_TYPES.h"
#include "../../Comman_Macros.h"
#include "EXT_Config.h"
#include "EXT_Private.h"

void ExtInt0_Init() {
	/* set interrupt sense control in INT0 to rising edge configuration */
	SET_BIT(MCUCR, MCUCR_ISC00);
	SET_BIT(MCUCR, MCUCR_ISC01);

	/* enable INT0 */
	SET_BIT(GICR, GICR_INT0);
}

void ExtInt1_Init() {
	/* set interrupt sense control in INT1 to rising edge configuration */
	SET_BIT(MCUCR, MCUCR_ISC10);
	SET_BIT(MCUCR, MCUCR_ISC11);

	/* enable INT1 */
	SET_BIT(GICR, GICR_INT1);
}

void ExtInt2_Init() {
	/* set interrupt sense control in INT2 to rising edge configuration */
	SET_BIT(MCUCSR, MCUCSR_ISC2);

	/* enable INT2 */
	SET_BIT(GICR, GICR_INT1);
}
