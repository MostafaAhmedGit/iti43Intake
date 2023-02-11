/*************************************************************
 * 
 * Filename: KEYPAD_Cfg.c
 * Description: Configuration source file of the KEYPAD driver.
 * Author: Eng. Mostafa Ahmed
 * Github: https://github.com/MostafaAhmedGit
 * 
 *************************************************************/

#include "KEYPAD_Cfg.h"
#include "DIO_Cfg.h"



const KEYPAD_DATA_N_4_t KEYPAD_4_by_4_DATA[HOW_MANY_4_BY_4_KEYPADS_CONNECTED] = 
{
	{
		/*.Active_What = Active_Low,*/
		.port = DIO_PORTA,
		.row1 = DIO_enuPin1,
		.row2 = DIO_enuPin2,
		.row3 = DIO_enuPin3,
		.row4 = DIO_enuPin4,
						   
		.col1 = DIO_enuPin5,
		.col2 = DIO_enuPin6,
		.col3 = DIO_enuPin7,
		.col4 = DIO_enuPin8
}
};