/****************************************************************/

/*			WRITTEN BY : MOSTAFA AHMED							*/

/****************************************************************/
#ifndef SEVENSEG_CONFIG_H
#define SEVENSEG_CONFIG_H


#include "../../1.LIB/Stdtypes.h"

#define Seven_Seg_1						0
#define Seven_Seg_2						1

#define Seven_Seg_1_Port			DIO_PORTA
#define Seven_Seg_2_Port			DIO_PORTB
#define Seven_Seg_Count					2

#define SevSeg_CommonCathode	1
#define SevSeg_CommonAnode		0

#define Templetes						2		//According to the types of Seven Segment  (Common Cathode and Common anode) that links with the values passed 
	

typedef enum
{
	SevSeg_enuOk = 0,
	SevSeg_enuNotOk,
	SevSeg_enuNull
}SevSeg_tenuErrorStatus;

typedef struct
{
	u8 PORT;
	u8 Pin_a;
	u8 Pin_b;
	u8 Pin_c;
	u8 Pin_d;
	u8 Pin_e;
	u8 Pin_f;
	u8 Pin_g;
	u8 Pin_COM;
	u8 SevenSeg_HW_type;
}SevenSegment_type;

typedef struct  
{
	u8 zero;
	u8 one;
	u8 two;
	u8 three;
	u8 four;
	u8 five;
	u8 six;
	u8 seven;
	u8 eight;
	u8 nine;
}SevenSegment_strFigures;

extern const SevenSegment_type SevenSeg_StrInfo[Seven_Seg_Count]; 
extern const SevenSegment_strFigures SevenSeg_strOutputForPinsInHex[Templetes]; 
#endif


