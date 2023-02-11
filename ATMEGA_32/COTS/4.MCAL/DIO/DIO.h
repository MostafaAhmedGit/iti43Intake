/****************************************************************/

/*			Written by: Mostafa Ahmed								*/

/****************************************************************/

#ifndef DIO_H
#define DIO_H

#include "Stdtypes.h"
#include "DIO_Cfg.h"
#include "DIO_Priv.h"
#include "Bitmath.h"
#define NULL	(void*)0


const extern DIO_strPinCfg_t DIO_strPinCfg[MAX_Pins];





/************************************************************************/
/*
	DIO Init Function
	Input : 			Void
	Output: 			DIO_tenuErrorStatus to report

*/
/************************************************************************/



DIO_tenuErrorStatus DIO_enuInit(void);


/************************************************************************/
/*
	DIO Set Pin Function
	Input : 			Port Number & Pin Number & Pin Value
	Output: 			DIO_tenuErrorStatus to report

*/
/************************************************************************/



DIO_tenuErrorStatus DIO_enuSETPIN(DIO_tenuPort Cpy_u8DIO_Port,DIO_tenuPins Cpy_u8DIO_Pinnum,DIO_tenuPinValue Cpy_tenuPinVal);

/************************************************************************/
/*
	DIO Change Config Function
	Input : 			Port Number & Pin Number & Pin Value
	Output: 			DIO_tenuErrorStatus to report

*/
/************************************************************************/



DIO_tenuErrorStatus DIO_enuChangeConfig(DIO_tenuPort Cpy_u8DIO_Port,DIO_tenuPins Cpy_u8DIO_Pinnum,DIO_tenuPinValue Cpy_tenuPinVal);


/************************************************************************/
/*
	DIO Toggles the pin	Input : Port Number & Pin Number & Pin Value
	Output: 			DIO_tenuErrorStatus to report

*/
/************************************************************************/

DIO_tenuErrorStatus DIO_enuTOGGLEPIN(DIO_tenuPort Cpy_u8DIO_Port,DIO_tenuPins Cpy_u8DIO_Pinnum);






/************************************************************************/
/*
	 Function to Write on a complete port a hex value , the port should 
	 be intialized to output 
	 
	 0x-XY   ---- > X = _ _ _ _ , Y = _ _ _ _
		Pins			7 6 5 4		  3 2 1 0
	
	Writing 1 on a pin means 5v displaying 
	Writing 0 on a pin means 0v displaying 
	
	Ex:-
	
	0xFF -------->  1111 1111, All port pins will have a 5v output
	
	Input : 			Port & Hex value to be displayed on port 
	
	Output: 			DIO_tenuErrorStatus to report

*/
/************************************************************************/


DIO_tenuErrorStatus DIO_enuSETPORT_HEX_Input(DIO_tenuPort Cpy_u8DIO_Port,u8 u8_WriteValueOnPort);



#endif