#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL25Z4.h"
#include "fsl_debug_console.h"
#include "tecl.h"

int main(void)
{
	unsigned char key3;
	keypad_init();
	LCD_init();

while(1){
	erase();
	Write("numerico o alpa");
    line2();
    Write("1) num  2)alpa");
	key3=0;
while (key3==0){
					key3 = keypad_getkey();

				}
while (key3!='C'){

if (key3=='1'){
	delayMs(100);
	erase();
	while (key3!='C'){

	key3=0;
	while (key3==0){
						key3 = keypad_getkey();

}
LCD_data(key3);
delayMs(100);

	}
}
if (key3=='2'){
	delayMs(100);
	erase();
	while (key3!='C'){

	key3=0;
	while (key3==0){
						key3 = teclado();

}
LCD_data(key3);
delayMs(100);

	}
}
}
}
}
