/*
 * Button_Inshallah.c
 *
 * Created: 1/19/2023 1:21:13 PM
 * Author : LEGION
 */ 

#include "DIO.h"
#include "Button.h"

#define F_CPU 800000UL
#include "util/delay.h"




int main(void)
{
	u8 x = 0;
	u8 *ptr = &x;
	
	DIO_tenuPins LED;
	LED = DIO_enuPin3;//0 - 4
	
    /* Replace with your application code */
	DIO_enuInit();
	
	while(1)
	{
		if(isButtonPressed(Push_Button_Pin0,ptr)==0)
		{
			
		_delay_ms(200);												//adder
		DIO_enuSETPIN(DIO_PORTA,LED,DIO_enuHigh);
		LED++;
		if(LED==7)
		{
			LED = 2;
		}
		}
		
		if(isButtonPressed(Push_Button_Pin1,ptr)==0)
		{
			_delay_ms(200);
			DIO_enuSETPIN(DIO_PORTA,LED,DIO_enuLow);
			LED--;
			if(LED==1)
			LED = 2;
		}
}
}