/****************************************************************/

/*			Written by: Mostafa Ahmed								*/

/****************************************************************/

#ifndef DIO_H
#define DIO_H

#include "Bitmath.h"
#include "Stdtypes.h"
#include "DIO_Cfg.h"
#include "DIO_Priv.h"

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
	DIO GET the pin	Input : Port Number & Pin Number & Pointer
	Output: 			DIO_tenuErrorStatus to report
	
	Updates the pin status in the pointer being Sent ;;

*/
/************************************************************************/




DIO_tenuErrorStatus DIO_enuGETPIN(DIO_tenuPort Cpy_u8DIO_Port,DIO_tenuPins Cpy_u8DIO_Pinnum,u8 *Ptr_Pin);



#endif