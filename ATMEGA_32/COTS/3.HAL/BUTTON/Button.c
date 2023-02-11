#include "DIO.h"
#include "Button.h"


u8 isButtonPressed(u8 Button_num,u8 *Ptr_val)
{
	
	u8 Status = 0;
	u8 Port_Getter = Button_num/8;
	
	
	
	//						CHECK IF THE PASSED POINTER IS NULL OR NOT ?
	if(Ptr_val==NULL)
	{
		Status = 0;
		return Status;
	}
	
	
	//	CHECKING THE PIN NUMBER AND THAT THE DIRECTION OF THE PIN IS OUTPUT
	else if(Button_num>MAX_Pins||DIO_strPinCfg[Button_num].DIO_tenuPinDirection==DIO_DIR_OUTPUT)
	{
		Status = DIO_enuNotOk;
		return Status;
	}
	
	else
	{
		switch(Port_Getter)
		{
			case(DIO_PORTA):
			DIO_enuGETPIN(DIO_PORTA,Button_num,Ptr_val);
			return *Ptr_val;
			break;
			
			case(DIO_PORTB):
			DIO_enuGETPIN(DIO_PORTB,Button_num,Ptr_val);
			return *Ptr_val;
			break;
			
			case(DIO_PORTC):
			DIO_enuGETPIN(DIO_PORTC,Button_num,Ptr_val);
			return *Ptr_val;
			break;
			
			case(DIO_PORTD):
			DIO_enuGETPIN(DIO_PORTD,Button_num,Ptr_val);
			return *Ptr_val; 
			break;
			
			default:
			Status = 0;
			break;
		}
		
	}
	
	
	return Status;
}