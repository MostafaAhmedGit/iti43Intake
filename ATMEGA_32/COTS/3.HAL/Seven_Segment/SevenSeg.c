/****************************************************************/

/*			WRITTEN BY : MOSTAFA AHMED							*/

/****************************************************************/


#include "../../4.MCAL/DIO/DIO.h"
#include "SevenSeg.h"
#include "SevenSeg_config.h"

SevSeg_tenuErrorStatus SevenSeg_enuErrorStatusInit(void)
{
	SevSeg_tenuErrorStatus Status = SevSeg_enuOk;
	DIO_enuInit();
	return Status;
}

SevSeg_tenuErrorStatus Display_OnSevSeg_ErrorStat(u8 SevenSeg_num,u8 DisplayThisFig)
{
	SevSeg_tenuErrorStatus Status = SevSeg_enuOk;
	
	//		enable for the COM in case of Common cathode
	
	//   In case of common cathode , I want to write GND (0v) on the COMM pin on the 7 SEG;
	
	if(SevenSeg_StrInfo[SevenSeg_num].SevenSeg_HW_type==SevSeg_CommonCathode)
	{
		DIO_enuSETPIN(SevenSeg_StrInfo[SevenSeg_num].PORT,SevenSeg_StrInfo[SevenSeg_num].Pin_COM,DIO_enuLow);
		switch(DisplayThisFig)
		{
		case 0:
		DIO_enuSETPORT_HEX_Input(SevenSeg_StrInfo[SevenSeg_num].PORT,SevenSeg_strOutputForPinsInHex[0].zero);break;
		case 1:
		DIO_enuSETPORT_HEX_Input(SevenSeg_StrInfo[SevenSeg_num].PORT,SevenSeg_strOutputForPinsInHex[0].one);break;
		case 2:
		DIO_enuSETPORT_HEX_Input(SevenSeg_StrInfo[SevenSeg_num].PORT,SevenSeg_strOutputForPinsInHex[0].two);break;
		case 3:
		DIO_enuSETPORT_HEX_Input(SevenSeg_StrInfo[SevenSeg_num].PORT,SevenSeg_strOutputForPinsInHex[0].three);break;
		case 4:
		DIO_enuSETPORT_HEX_Input(SevenSeg_StrInfo[SevenSeg_num].PORT,SevenSeg_strOutputForPinsInHex[0].four);break;
		case 5:
		DIO_enuSETPORT_HEX_Input(SevenSeg_StrInfo[SevenSeg_num].PORT,SevenSeg_strOutputForPinsInHex[0].five);break;
		case 6:
		DIO_enuSETPORT_HEX_Input(SevenSeg_StrInfo[SevenSeg_num].PORT,SevenSeg_strOutputForPinsInHex[0].six);break;
		case 7:
		DIO_enuSETPORT_HEX_Input(SevenSeg_StrInfo[SevenSeg_num].PORT,SevenSeg_strOutputForPinsInHex[0].seven);break;
		case 8:
		DIO_enuSETPORT_HEX_Input(SevenSeg_StrInfo[SevenSeg_num].PORT,SevenSeg_strOutputForPinsInHex[0].eight);break;
		case 9:
		DIO_enuSETPORT_HEX_Input(SevenSeg_StrInfo[SevenSeg_num].PORT,SevenSeg_strOutputForPinsInHex[0].nine);break;
		}
	}
	
	//   In case of common anode , I want to write High (5v) on the COMM pin on the 7 SEG;
	
	else if(SevenSeg_StrInfo[SevenSeg_num].SevenSeg_HW_type==SevSeg_CommonAnode)
		DIO_enuSETPIN(SevenSeg_StrInfo[SevenSeg_num].PORT,SevenSeg_StrInfo[SevenSeg_num].Pin_COM,DIO_enuHigh);
	
	return Status;
}
SevSeg_tenuErrorStatus void_TurnOFF(u8 SevenSeg_num)
{
	SevSeg_tenuErrorStatus Status = SevSeg_enuOk;
	return Status;
}