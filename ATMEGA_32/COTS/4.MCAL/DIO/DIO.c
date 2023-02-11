

#include "DIO.h"
#include "DIO_Priv.h"



#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

DIO_tenuErrorStatus DIO_enuInit(void)
{
	DIO_tenuErrorStatus Status = DIO_enuOk;
	
	u8 i;
	u8 Loc_u8PortNumber = 0;
	u8 Loc_u8PinNumber = 0;
	for(i=0;i<MAX_Pins;i++)
	{
		Loc_u8PortNumber = i/8;
		Loc_u8PinNumber = i%8;
		
		
		switch(Loc_u8PortNumber)
		{
			case(DIO_PORTA):	//			------>			in case its the pins from 0-7
			
				if(DIO_strPinCfg[i].DIO_tenuPinDirection == DIO_DIR_OUTPUT)
				{
					SET_BIT(GPIOA->DDR,Loc_u8PinNumber);
				}
				else if(DIO_strPinCfg[i].DIO_tenuPinDirection== DIO_DIR_INPUT)
				{
					CLR_BIT(GPIOA->DDR,Loc_u8PinNumber);
					
					if(DIO_strPinCfg[i].DIO_enutPinState == DIO_INPUT_Pull_Up)
					{
						SET_BIT(GPIOA->PORT,Loc_u8PinNumber);
					}
					else if(DIO_strPinCfg[i].DIO_enutPinState == DIO_INPUT_Pull_Down)
					{
						CLR_BIT(GPIOA->PORT,Loc_u8PinNumber);
					}
					else                      // If the configuration folder has a mistake I can catch it here 
						{
							Status = DIO_enuNotOk;
							return Status;
						}
				}
				break;
				
				
			case(DIO_PORTB):						//   ------> in case its from 8-15
				if(DIO_strPinCfg[i].DIO_tenuPinDirection == DIO_DIR_OUTPUT)
				{
					SET_BIT(GPIOB->DDR,Loc_u8PinNumber);
				}
				else if(DIO_strPinCfg[i].DIO_tenuPinDirection == DIO_DIR_INPUT)
				{
					CLR_BIT(GPIOB->DDR,Loc_u8PinNumber);
					if(DIO_strPinCfg[i].DIO_enutPinState == DIO_INPUT_Pull_Up)
					{
						SET_BIT(GPIOB->PORT,Loc_u8PinNumber);
					}
					else if(DIO_strPinCfg[i].DIO_enutPinState == DIO_INPUT_Pull_Down)
					{
						CLR_BIT(GPIOB->PORT,Loc_u8PinNumber);
					}
				}
				else 
				{
					Status =DIO_enuNotOk;
					return Status;
				}
				break;
			case(DIO_PORTC):					// -------> in case its from 16-23 
				if(DIO_strPinCfg[i].DIO_tenuPinDirection == DIO_DIR_OUTPUT)
				{
					SET_BIT(GPIOC->DDR,Loc_u8PinNumber);
				}
				else if(DIO_strPinCfg[i].DIO_enutPinState == DIO_DIR_OUTPUT)
				{
					CLR_BIT(GPIOC->DDR,Loc_u8PinNumber);
					if(DIO_strPinCfg[i].DIO_enutPinState== DIO_INPUT_Pull_Up)
					{
						SET_BIT(GPIOC->PORT,Loc_u8PinNumber);
					}
					else
					{
						Status =DIO_enuNotOk;
						return Status;
					}
				}
				break;
				
			case(DIO_PORTD):			// ----> in case its from 24-31
			
			
				if(DIO_strPinCfg[i].DIO_tenuPinDirection == DIO_DIR_OUTPUT)
				{
					SET_BIT(GPIOD->DDR,Loc_u8PinNumber);
				}
				else if(DIO_strPinCfg[i].DIO_tenuPinDirection == DIO_DIR_INPUT)
				{
					CLR_BIT(GPIOD->DDR,Loc_u8PinNumber);
					
					if(DIO_strPinCfg[i].DIO_enutPinState == DIO_INPUT_Pull_Up)
					{
						SET_BIT(GPIOD->PORT,Loc_u8PinNumber);
					}
					else if(DIO_strPinCfg[i].DIO_enutPinState == DIO_INPUT_Pull_Down)
					{
						CLR_BIT(GPIOD->PORT,Loc_u8PinNumber);
					}
					else
					{
						Status = DIO_enuNotOk;
						return Status;
					}
				}
				break;
		}
	}
	
	return Status;
}


DIO_tenuErrorStatus DIO_enuSETPORT_HEX_Input(DIO_tenuPort Cpy_u8DIO_Port,u8 u8_WriteValueOnPort)
{
	//You Have to set the Port to output before writing a value on the port !
	
	//Setting the status 1st to OK until I check on all the parameters !
	DIO_tenuErrorStatus Status = DIO_enuOk;
	
	if(Cpy_u8DIO_Port<0||Cpy_u8DIO_Port>3)
	{
		Status = DIO_enuNotOk;
		return Status;
	}
	
	switch(Cpy_u8DIO_Port)
	{
		
		case(DIO_PORTA):
		ASSIGN_REG(GPIOA->PORT,u8_WriteValueOnPort);
		break;
		
		case(DIO_PORTB):
		{
			ASSIGN_REG(GPIOB->PORT,u8_WriteValueOnPort);
			
		}break;
		case(DIO_PORTC):
		{
			ASSIGN_REG(GPIOC->PORT,u8_WriteValueOnPort);
			
		}break;
		
		case(DIO_PORTD):
		{
			
			ASSIGN_REG(GPIOD->PORT,u8_WriteValueOnPort);
			
		}break;
		
		
	}
	
	return Status;
}


DIO_tenuErrorStatus DIO_enuSETPIN(DIO_tenuPort Cpy_u8DIO_Port,DIO_tenuPins Cpy_u8DIO_Pinnum,DIO_tenuPinValue Cpy_tenuPinVal)
{
	DIO_tenuErrorStatus Status = DIO_enuOk;	//it's OK until something odd happens then I will flip the Status
	u8 Local_u8PinNum = Cpy_u8DIO_Pinnum%8;
	
	if(Cpy_u8DIO_Port>MAX_PORT_Count)
	{
		Status = DIO_enuNotOk;
		return Status;
	}
	else if(Cpy_u8DIO_Pinnum>MAX_Pins||DIO_strPinCfg[Cpy_u8DIO_Pinnum].DIO_tenuPinDirection==DIO_DIR_INPUT)
	{
		Status = DIO_enuNotOk;
		return Status;
	}
	else
	{
	switch(Cpy_u8DIO_Port)
		{
			
			case(DIO_PORTA):
					if(Cpy_tenuPinVal==DIO_enuHigh)
						SET_BIT(GPIOA->PORT,Local_u8PinNum);
					else
						CLR_BIT(GPIOA->PORT,Local_u8PinNum);
					break;
			case(DIO_PORTB):
			{
				if(Cpy_tenuPinVal==DIO_enuHigh)
					SET_BIT(GPIOB->PORT,Local_u8PinNum);
				else
					CLR_BIT(GPIOB->PORT,Local_u8PinNum);
				
			}break;
			case(DIO_PORTC):
			{
				if(Cpy_tenuPinVal==DIO_enuHigh)
					SET_BIT(GPIOC->PORT,Local_u8PinNum);
				else
					CLR_BIT(GPIOC->PORT,Local_u8PinNum);
			}break;
			
			case(DIO_PORTD):
			{
				if(Cpy_tenuPinVal==DIO_enuHigh)
					SET_BIT(GPIOD->PORT,Local_u8PinNum);
				else
					CLR_BIT(GPIOD->PORT,Local_u8PinNum);
				
				
			}break;
			
			
		}
			}
		return Status;
	
}


DIO_tenuErrorStatus DIO_enuGETPIN(DIO_tenuPort Cpy_u8DIO_Port,DIO_tenuPins Cpy_u8DIO_Pinnum,u8 *Ptr_Pin)
{
	DIO_tenuErrorStatus Status = DIO_enuOk;
	u8 Local_u8Pinnum = Cpy_u8DIO_Pinnum%8;
	
	if(Ptr_Pin==NULL)		
	//checking if the pointer is NULL or not 
		{
		Status = DIO_enuNotOk;
		return Status;
		}
	else if(Cpy_u8DIO_Port>MAX_PORT_Count)	
	//if the parameter passed is invalid
	{
		Status = DIO_enuNotOk;
		return Status;
	}
	else if(Cpy_u8DIO_Pinnum>MAX_Pins||DIO_strPinCfg[Cpy_u8DIO_Pinnum].DIO_tenuPinDirection==DIO_DIR_OUTPUT)
	{
		//CHECKING THE PIN NUMBER AND THAT THE DIRECTION OF THE PIN IS OUTPUT 
		Status = DIO_enuNotOk;
		return Status;
	}
		
	else
	{
		switch(Cpy_u8DIO_Port)
		{
			case(DIO_PORTA):
			*Ptr_Pin = GET_BIT(GPIOA->PIN,Local_u8Pinnum);
			break;
			
			case(DIO_PORTB):
			*Ptr_Pin = GET_BIT(GPIOB->PIN,Local_u8Pinnum);
			break;
			
			case(DIO_PORTC):
			*Ptr_Pin = GET_BIT(GPIOC->PIN,Local_u8Pinnum);
			break;
			
			case(DIO_PORTD):
			*Ptr_Pin = GET_BIT(GPIOD->PIN,Local_u8Pinnum);
			break;
			default:
			Status = DIO_enuNotOk;
			break;
		}
		
	}
		
		
		return Status;
}

/*
DIO_tenuErrorStatus DIO_enuTOGGLEPIN(DIO_tenuPort Cpy_u8DIO_Port,DIO_tenuPins Cpy_u8DIO_Pinnum)
{
	DIO_tenuErrorStatus Status = DIO_enuOk;			//it's OK until something odd happens then I will flip the Status
	
	u8 Local_CpyPinnum = Cpy_u8DIO_Pinnum%8;

	switch(Cpy_u8DIO_Port)
	{
		
		case(DIO_PORTA):
			if((GET_BIT(GPIOA->PORT,Local_CpyPinnum))==DIO_enuHigh)
					{
					CLR_BIT(GPIOA->PORT,Local_CpyPinnum);
					}
			else
				{
				SET_BIT(GPIOA->PORT,Local_CpyPinnum);
				}
		break;
		case(DIO_PORTB):
		
			if((GET_BIT(GPIOB->PORT,Local_CpyPinnum))==DIO_enuHigh)
			CLR_BIT(GPIOB->PORT,Local_CpyPinnum);
			else
			SET_BIT(GPIOB->PORT,Local_CpyPinnum);
			
			break;
		case(DIO_PORTC):
		
			if((GET_BIT(GPIOC->PORT,Local_CpyPinnum))==DIO_enuHigh)
			CLR_BIT(GPIOC->PORT,Local_CpyPinnum);
			else
			SET_BIT(GPIOC->PORT,Local_CpyPinnum);
			break;
		
		case(DIO_PORTD):
		
			if((GET_BIT(GPIOD->PIN,Local_CpyPinnum))==DIO_enuHigh)
			CLR_BIT(GPIOD->PORT,Local_CpyPinnum);
			else
			SET_BIT(GPIOD->PORT,Local_CpyPinnum);
		break;
		
		
	}
	
	return Status;
	
}
*/