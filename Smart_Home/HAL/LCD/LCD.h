/*
 ============================================================================
 Name        : LCD.h
 Module Name : LCD
 Author      : Ahmed Ali
 Date        : 20 Aug 2023
 ============================================================================
 */

#include "../../STD_TYPES.h"

#ifndef LCD_H_
#define LCD_H_

/* ==============================CONFIGURATION=============================== */

/* configure PORTA as a output for data */
#define LCD_DATA_PORT PORT_C
/* configure PORTB as a output control pins */
#define LCD_CTRL_PORT PORT_B
#define LCD_RS_PIN    PIN0
#define LCD_RW_PIN    PIN1
#define LCD_EN_PIN    PIN2

#define LCD_CLEAR_DISPLAY 0x01
#define LCD_CURSOR_OFF 0x0C
#define LCD_CURSOR_ON 0x0E
#define LCD_CURSOR_POSITION 0x80
#define LCD_TWO_LINE_EIGHT_BIT_MODE 0x38

/* ================================FUNCTIONS================================== */

/* function to send command to LCD */
void LCD_SendCommand(uint8 uint8_command);

/* function to send data to LCD */
void LCD_SendData(uint8 uint8_data);

/* function to initialization the LCD */
void LCD_Init(void);

/* function to send a string to LCD */
void LCD_DisplayString(const uint8 *uint8_str);

/* function to convert number to string and send it to LCD */
void LCD_NumberToString(sint32 data);

/* function to move cursor to specific location in LCD */
void LCD_MoveCursor(uint8 row, uint8 column);

/* function to clear LCD screen */
void LCD_ClearScreen(void);

/* function to display string in specific row and column */
void LCD_displayStringRowColumn(uint8 row, uint8 column, const uint8 *Str);

#endif /* LCD_H_ */
