/*
 ============================================================================
 Name        : EXT_Config.h
 Module Name : External Interrupt
 Author      : Ahmed Ali
 Date        : 26 Aug 2023
 ============================================================================
 */

#ifndef EXT_CONFIG_H_
#define EXT_CONFIG_H_

/* ==============================CONFIGURATION=============================== */

/* external interrupt request 0 enable */
#define GICR_INT0  6

/* external interrupt request 1 enable */
#define GICR_INT1  7

/* external interrupt request 2 enable */
#define GICR_INT2  5

/* interrupt sense control 0 for INT0 */
#define MCUCR_ISC00 0
#define MCUCR_ISC01 1

/* interrupt sense control 1 for INT1 */
#define MCUCR_ISC10 2
#define MCUCR_ISC11 3

/* interrupt sense control 2 for INT2 */
#define MCUCSR_ISC2 6

/* ================================FUNCTIONS================================== */

/* function to enable external interrupt of INT0 */
void ExtInt0_Init();

/* function to enable external interrupt of INT1 */
void ExtInt1_Init();

/* function to enable external interrupt of INT2 */
void ExtInt2_Init();

#endif /* EXT_CONFIG_H_ */
