/*
===============================================================================
 Name        : blinnktest1.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif

#define LED0_GPIO_PORT_NUM                      0
#define LED0_GPIO_BIT_NUM                       22
#define LED1_GPIO_PORT_NUM                      3
#define LED1_GPIO_BIT_NUM                       26
#define LED2_GPIO_PORT_NUM                      3
#define LED2_GPIO_BIT_NUM                       25

#include <cr_section_macros.h>
int i,j,k,c=0;
// TODO: insert other include files here

// TODO: insert other definitions and declarations here
void Led_Colour()
{
	if(c==0)
	{
		i=1;j=1;k=1;

	}
	if(c==1)
		{
			i=0;j=1;k=0;

		}
	if(c==2)
		{
			i=1;j=0;k=0;

		}
	if(c==3)
		{
			i=1;j=1;k=1;

		}
	Chip_GPIO_WriteDirBit(LPC_GPIO, LED0_GPIO_PORT_NUM, LED0_GPIO_BIT_NUM, i);
	Chip_GPIO_WriteDirBit(LPC_GPIO, LED1_GPIO_PORT_NUM, LED1_GPIO_BIT_NUM, j);
	Chip_GPIO_WriteDirBit(LPC_GPIO, LED2_GPIO_PORT_NUM, LED2_GPIO_BIT_NUM, k);
for (c=0;c<=4;c++)
	if(c==4)
	{
		c=0;
	}
}
int main(void) {

#if defined (__USE_LPCOPEN)
    // Read clock settings and update SystemCoreClock variable
    SystemCoreClockUpdate();
#if !defined(NO_BOARD_LIB)
    // Set up and initialize all required blocks and
    // functions related to the board hardware
    Board_Init();



    // Set the LED to the state of "On"

#endif
#endif

    // TODO: insert code here

    // Force the counter to be placed into memory

    // Enter an infinite loop, just incrementing a counter
    while(1) {
    	Led_Colour();
    	for(int j=0;j<=4000000;j++);



    return 0 ;
}}
