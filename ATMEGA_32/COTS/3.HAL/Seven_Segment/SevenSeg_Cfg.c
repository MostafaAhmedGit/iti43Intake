/***************************************S*************************/

/*			WRITTEN BY : MOSTAFA AHMED							*/

/****************************************************************/


#include "../../4.MCAL/DIO/DIO.h"				//DIO_H
#include "SevenSeg_config.h"







const SevenSegment_type SevenSeg_StrInfo[Seven_Seg_Count] = 
{
	//Seven Segment Configuration for SEVEN SEG 1
	{
		//Seven Segment 1	configuration with the DIO 
		
		//		Connection with DIO -------- > SEV_SEG 0
		.PORT  =   DIO_PORTA,
		.Pin_a =	DIO_enuPin1,
		.Pin_b =	DIO_enuPin2,
		.Pin_c =	DIO_enuPin3,
		.Pin_d =	DIO_enuPin4,
		.Pin_e =	DIO_enuPin5,
		.Pin_f =	DIO_enuPin6,
		.Pin_g =	DIO_enuPin7,
		.Pin_COM =	DIO_enuPin8,
		.SevenSeg_HW_type =	SevSeg_CommonCathode,
		
	},
		{
			//Seven Segment 1	configuration with the DIO
			
			//		Connection with DIO -------- > SEV_SEG 0
			.PORT  =   DIO_PORTB,
			.Pin_a =	DIO_enuPin9,
			.Pin_b =	DIO_enuPin10,
			.Pin_c =	DIO_enuPin11,
			.Pin_d =	DIO_enuPin12,
			.Pin_e =	DIO_enuPin13,
			.Pin_f =	DIO_enuPin14,
			.Pin_g =	DIO_enuPin15,
			.Pin_COM =	DIO_enuPin16,
			.SevenSeg_HW_type =	SevSeg_CommonCathode
		}
};
	




const SevenSegment_strFigures SevenSeg_strOutputForPinsInHex[Templetes] =
{
	{
		//Assuming CC
		.zero =0x3F ,
		.one = 0x06,
		.two = 0x5B,
	.three   = 0x4F,
	 .four   = 0x66,
	 .five   = 0x6D,
	 .six    = 0x7D,
	 .seven  = 0x07,
	 .eight  = 0x7F,
	 .nine   = 0x67,
	}
};






