#include "LED_config.h"
#include "DIO_Cfg.h"






//		Each and every LED is connected to a certain DIO pin + Has a type 

const LED_data_t LED_data[LEDS_AVALAIBLE] = 
{
	{
		.Connection_Pin = DIO_enuPin1,
		.LED_TYPE = LED_TYPE_Active_High
		
	},
	
		{
			.Connection_Pin = DIO_enuPin2,
			.LED_TYPE = LED_TYPE_Active_High
			
		},
		
			{
				.Connection_Pin = DIO_enuPin3,
				.LED_TYPE = LED_TYPE_Active_High
				
			},
			
		{
			.Connection_Pin = DIO_enuPin4,
			.LED_TYPE = LED_TYPE_Active_High
			
		},
		{
			.Connection_Pin = DIO_enuPin5,
			.LED_TYPE = LED_TYPE_Active_High
			
		},
		{
			.Connection_Pin = DIO_enuPin6,
			.LED_TYPE = LED_TYPE_Active_High
			
		},
		{
			.Connection_Pin = DIO_enuPin7,
			.LED_TYPE = LED_TYPE_Active_High
			
		}
	
};