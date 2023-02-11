#ifndef LED_CONFIG_H
#define LED_CONFIG_H
#include "../../1.LIB/Stdtypes.h"
//#include "../../4.MCAL/DIO/DIO.h"

#define LEDS_AVALAIBLE	7

// 
// #define all_Are_AH	0	//if all leds are active HIGH
// #define all_Are_AL	1	//if all leds are active low
// #define mixed_types 2	// having mixed types leds in the project
// 
// #define LEDS_TYPES	mixed_types


typedef struct  
{
	u8 Connection_Pin;
	u8 LED_TYPE;
}LED_data_t;


typedef enum 
{
	LED_TYPE_Active_High = 0,
	LED_TYPE_Active_Low , 
}LED_Works_AS;


typedef enum
{
	LED_PIN0 = DIO_enuPin1,
   LED_PIN1	= DIO_enuPin2,
   LED_PIN2	= DIO_enuPin3,
   LED_PIN3	= DIO_enuPin4,
   LED_PIN4	= DIO_enuPin5,
   LED_PIN5	= DIO_enuPin6,
   LED_PIN6 = DIO_enuPin7
}LEDS_PINS;

// #define LED_0_PIN		DIO_enuPin1
// #define LED_1_PIN		DIO_enuPin2
// #define LED_2_PIN		DIO_enuPin3
// #define LED_3_PIN		DIO_enuPin4
// #define LED_4_PIN		DIO_enuPin5
// #define LED_5_PIN		DIO_enuPin6
// #define LED_6_PIN		DIO_enuPin7

extern const LED_data_t LED_data[LEDS_AVALAIBLE];
#endif