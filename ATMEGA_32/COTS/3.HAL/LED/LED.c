
#include "../../4.MCAL/DIO/DIO.h"

#include "LED.h"
#include "LED_config.h"

/*#include "../../COTS/3.HAL/LED.h"*/




void LED_Init(void)
{

}



void LED_voidON(u8 LED_num)
{
	u8 Port_Getter = LED_num/8;		//get the port 3shan ana 3amel el dio set pin bya5od port,pin,value;;
	
	

	if(Port_Getter==0&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_High)	//PORT A
	{
		DIO_enuSETPIN(DIO_PORTA,LED_num,DIO_enuHigh);	
	}
	else if(Port_Getter==1&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_High)	//PORT B
	{
		DIO_enuSETPIN(DIO_PORTB,LED_num,DIO_enuHigh);
	}
	else if(Port_Getter==2&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_High)	//PORT C
	{
		DIO_enuSETPIN(DIO_PORTC,LED_num,DIO_enuHigh);
	}
	else if(Port_Getter==3&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_High)	//PORT D
	{
		DIO_enuSETPIN(DIO_PORTD,LED_num,DIO_enuHigh);
	}

		if(Port_Getter==0&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_Low)	//PORT A
		{
			DIO_enuSETPIN(DIO_PORTA,LED_num,DIO_enuLow);
		}
		else if(Port_Getter==1&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_Low)	//PORT B
		{
			DIO_enuSETPIN(DIO_PORTB,LED_num,DIO_enuLow);
		}
		else if(Port_Getter==2&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_Low)	//PORT C
		{
			DIO_enuSETPIN(DIO_PORTC,LED_num,DIO_enuLow);
		}
		else if(Port_Getter==3&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_Low)	//PORT D
		{
			DIO_enuSETPIN(DIO_PORTD,LED_num,DIO_enuLow);
		}

}

void LED_voidOFF(u8 LED_num)
{
	u8 Port_Getter = LED_num/8;		//get the port 3shan ana 3amel el dio set pin bya5od port,pin,value;;
	
	

	if(Port_Getter==0&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_Low)	//PORT A
	{
		DIO_enuSETPIN(DIO_PORTA,LED_num,DIO_enuHigh);
	}
	else if(Port_Getter==1&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_Low)	//PORT B
	{
		DIO_enuSETPIN(DIO_PORTB,LED_num,DIO_enuHigh);
	}
	else if(Port_Getter==2&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_Low)	//PORT C
	{
		DIO_enuSETPIN(DIO_PORTC,LED_num,DIO_enuHigh);
	}
	else if(Port_Getter==3&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_Low)	//PORT D
	{
		DIO_enuSETPIN(DIO_PORTD,LED_num,DIO_enuHigh);
	}

	if(Port_Getter==0&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_Low)	//PORT A
	{
		DIO_enuSETPIN(DIO_PORTA,LED_num,DIO_enuLow);
	}
	else if(Port_Getter==1&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_Low)	//PORT B
	{
		DIO_enuSETPIN(DIO_PORTB,LED_num,DIO_enuLow);
	}
	else if(Port_Getter==2&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_Low)	//PORT C
	{
		DIO_enuSETPIN(DIO_PORTC,LED_num,DIO_enuLow);
	}
	else if(Port_Getter==3&&LED_data[LED_num].LED_TYPE==LED_TYPE_Active_Low)	//PORT D
	{
		DIO_enuSETPIN(DIO_PORTD,LED_num,DIO_enuLow);
	}

}
void LED_voidTOGGLE(u8 LED_num)
{
	u8 Port_Getter = LED_num/8;		//get the port 3shan ana 3amel el dio set pin bya5od port,pin,value;;
	if(Port_Getter==0)	//PORT A
	{
		DIO_enuTOGGLEPIN(DIO_PORTA,LED_num);
	}
	else if(Port_Getter==1)	//PORT B
	{
		DIO_enuTOGGLEPIN(DIO_PORTB,LED_num);
	}
	else if(Port_Getter==2)	//PORT C
	{
		DIO_enuTOGGLEPIN(DIO_PORTC,LED_num);
	}
	else if(Port_Getter==3)	//PORT D
	{
		DIO_enuTOGGLEPIN(DIO_PORTD,LED_num);
	}
}