/*
 * EXTI_SSD_Button.c
 *
 * Created: 2/1/2023 4:30:26 PM
 * Author : LEGION
 */ 


#include "DIO.h"
#include "avr/Interrupt.h"
#include "SevenSeg.h"
#include "Button.h"
#include "EXTI.h"
#include "GI.h"
#define F_CPU 8000000UL
#include "util/delay.h"
#include "Bitmath.h"

u8 Global_u8Countr = 0;
ISR(INT0_vect)	//ADD
{
	Global_u8Countr--;
	_delay_ms(50);
	if(Global_u8Countr<0)
	Global_u8Countr=0;
		
}

ISR(INT1_vect)	//SUB
{
	Global_u8Countr++;
	_delay_ms(50);
	if(Global_u8Countr>9)
	Global_u8Countr=0;
}

int main(void)
{
	SevenSeg_enuErrorStatusInit();
	EXTI_enuInit();
	External_Interrupt_enuConfig(DIO_enuPin27);
	External_Interrupt_enuConfig(DIO_enuPin28);

    while (1) 
    {
		Display_OnSevSeg_ErrorStat(Seven_Seg_1,Global_u8Countr);
    }
}

