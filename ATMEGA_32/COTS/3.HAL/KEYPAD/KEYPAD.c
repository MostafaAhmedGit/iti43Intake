/*************************************************************
 * 
 * Filename: KEYPAD.c
 * Description: Source file of the KEYPAD driver.
 * Author: Eng. Mostafa Ahmed
 * Github: https://github.com/MostafaAhmedGit
 * 
 *************************************************************/

#include "KEYPAD_Cfg.h"
#include "KEYPAD_Priv.h"
#include "KEYPAD.h"
#include "DIO.h"


Keypad_enuErrorStatus Keypad_enuInit(void)
{
	Keypad_enuErrorStatus Status;
	if(DIO_enuInit()==1)
		Status = Keypad_enuOK;
		return Status;
	
	
	
}
KEYPAD_enuRETURN_IfPressed Keypad_enuWHAT_IS_PRESSED(KEYPADS_IN_SYS Keypad_enuNum)
{
	u8 Local_u8KeyStroke = 0;
	
	u8 *ptr_Local_u8KeyStroke = &Local_u8KeyStroke;
	
	Keypad_enuErrorStatus Status = Keypad_enuOK;
	
	
	#if Keypad_N_4_0_ACTIVE_WHAT==Active_Low
	
	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin9,DIO_enuLow);
	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin10,DIO_enuLow);
	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin11,DIO_enuLow);
	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin12,DIO_enuLow);
	
	//Enable button B11 ----> 9

	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col1,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col2,DIO_enuLow);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col3,DIO_enuHigh);	//SET the row */
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col4,DIO_enuHigh);	//SET the row
	
	DIO_enuGETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].row2,ptr_Local_u8KeyStroke);
	if(Local_u8KeyStroke==0)
	{
		return nine;
		
//		For Testing Valuess on LEDS	!!!
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin9,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin10,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin11,DIO_enuHigh);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin12,DIO_enuHigh);
	}
	
	
	
	//Enable button B10	---> 6
	
	
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col2,DIO_enuHigh);	//SET the row */
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col1,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col3,DIO_enuLow);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col4,DIO_enuHigh);	//SET the row
	DIO_enuGETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].row2,ptr_Local_u8KeyStroke);
	if(Local_u8KeyStroke==0)
	{
		return six;
//		For Testing Valuess on LEDS	!!!
//  	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin9,DIO_enuHigh);
//  	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin10,DIO_enuHigh);
//  	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin11,DIO_enuLow);
//  	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin12,DIO_enuLow);
	}
	
	//Enable button B9	---> 3
	
	
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col1,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col2,DIO_enuHigh);	//SET the row */
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col3,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col4,DIO_enuLow);	//SET the row
	DIO_enuGETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].row2,ptr_Local_u8KeyStroke);
	if(Local_u8KeyStroke==0)
	{
		return three;
		//		For Testing Valuess on LEDS	!!!
//  	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin9,DIO_enuLow);
//  	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin10,DIO_enuHigh);
//  	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin11,DIO_enuHigh);
//  	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin12,DIO_enuLow);
	}
	
	
	//Enable button B5	---> 2
	
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col1,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col2,DIO_enuHigh);	//SET the row */
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col3,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col4,DIO_enuLow);	//SET the row
	DIO_enuGETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].row3,ptr_Local_u8KeyStroke);
	if(Local_u8KeyStroke==0)
	{
		return two;
					//		For Testing Valuess on LEDS	!!!
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin9,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin10,DIO_enuHigh);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin11,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin12,DIO_enuLow);
	}
	
	
	
	
	//Enable button B1	---> 1
	
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col1,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col2,DIO_enuHigh);	//SET the row */
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col3,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col4,DIO_enuLow);	//SET the row
	DIO_enuGETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,DIO_enuPin4,ptr_Local_u8KeyStroke);
	if(Local_u8KeyStroke==0)
	{
		return one;
		
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin9,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin10,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin11,DIO_enuHigh);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin12,DIO_enuLow);
	}
	
	
	//Enable button B2	---> 4
	
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col1,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col2,DIO_enuHigh);	//SET the row */
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col3,DIO_enuLow);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col4,DIO_enuHigh);	//SET the row
	DIO_enuGETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,DIO_enuPin4,ptr_Local_u8KeyStroke);
	if(Local_u8KeyStroke==0)
	{
		return four;
	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin9,DIO_enuHigh);
	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin10,DIO_enuLow);
	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin11,DIO_enuLow);
	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin12,DIO_enuLow);
	}
	
	
	//Enable button B2	---> 7
	
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col1,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col2,DIO_enuLow);	//SET the row */
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col3,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col4,DIO_enuHigh);	//SET the row
	DIO_enuGETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,DIO_enuPin4,ptr_Local_u8KeyStroke);
	if(Local_u8KeyStroke==0)
	{
		
		return seven;
 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin9,DIO_enuHigh);
 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin10,DIO_enuHigh);
 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin11,DIO_enuHigh);
 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin12,DIO_enuLow);
	}
	
	
	//Enable button B2	---> 5
	
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col1,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col2,DIO_enuHigh);	//SET the row */
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col3,DIO_enuLow);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col4,DIO_enuHigh);	//SET the row
	DIO_enuGETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].row3,ptr_Local_u8KeyStroke);
	if(Local_u8KeyStroke==0)
	{
		return five;
	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin9,DIO_enuHigh);
	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin10,DIO_enuLow);
	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin11,DIO_enuHigh);
	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin12,DIO_enuLow);
	}
	
	
	//Enable button B2	---> 8
	
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col1,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col2,DIO_enuLow);	//SET the row */
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col3,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col4,DIO_enuHigh);	//SET the row
	DIO_enuGETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].row3,ptr_Local_u8KeyStroke);
	if(Local_u8KeyStroke==0)
	{
		return eight;
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin9,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin10,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin11,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin12,DIO_enuHigh);
	}
	
	//Enable button B2	---> A
	
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col1,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col2,DIO_enuHigh);	//SET the row */
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col3,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col4,DIO_enuLow);	//SET the row
	DIO_enuGETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].row1,ptr_Local_u8KeyStroke);
	if(Local_u8KeyStroke==0)
	{
		return a;
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin9,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin10,DIO_enuHigh);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin11,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin12,DIO_enuHigh);
	}
	
	
	//Enable button B2	---> B
	
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col1,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col2,DIO_enuHigh);	//SET the row */
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col3,DIO_enuLow);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col4,DIO_enuHigh);	//SET the row
	DIO_enuGETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].row1,ptr_Local_u8KeyStroke);
	if(Local_u8KeyStroke==0)
	{
		return b;
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin9,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin10,DIO_enuHigh);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin11,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin12,DIO_enuHigh);
	}
	
	//Enable button B2	---> C
	
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col1,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col2,DIO_enuLow);	//SET the row */
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col3,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col4,DIO_enuHigh);	//SET the row
	DIO_enuGETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].row1,ptr_Local_u8KeyStroke);
	if(Local_u8KeyStroke==0)
	{
		return c;
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin9,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin10,DIO_enuHigh);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin11,DIO_enuHigh);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin12,DIO_enuHigh);
	}
	
	
	//Enable button B2	---> D
	
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col1,DIO_enuLow);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col2,DIO_enuHigh);	//SET the row */
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col3,DIO_enuHigh);	//SET the row
	DIO_enuSETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].col4,DIO_enuHigh);	//SET the row 
	
		DIO_enuGETPIN(KEYPAD_4_by_4_DATA[Keypad_enuNum].port,KEYPAD_4_by_4_DATA[Keypad_enuNum].row1,ptr_Local_u8KeyStroke);
		if(Local_u8KeyStroke==0)
	{
		return d;
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin9,DIO_enuHigh);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin10,DIO_enuHigh);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin11,DIO_enuLow);
// 	DIO_enuSETPIN(DIO_PORTB,DIO_enuPin12,DIO_enuHigh);
	}
	
	#endif
	return Status;
	
}