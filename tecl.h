/*
 * tecl.h
 *
 *  Created on: 2 nov. 2019
 *      Author: David
 */

#ifndef TECL_H_
#define TECL_H_

void delayUs(int n);
void delayMs(int n);
void keypad_init(void);
void LCD_init(void);
void LCD_nibble_write(unsigned char data, unsigned char control);
void LCD_data(unsigned char data);
void LCD_command(unsigned char command);
char keypad_getkey(void);
unsigned char  teclado(void);
unsigned char escribirletra(int cod,int lem);
void Write(char c[32]);
void erase(void);
void line1(void);
void line2(void);
void cusoron(void);
void cursoroff(void);
void lefall(int p);
void rigthall(int p);
void coordinate(int x,int y);



#endif /* TECL_H_ */
