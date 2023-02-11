/****************************************************************/

/*			WRITTEN BY : MOSTAFA AHMED							*/

/****************************************************************/

#ifndef DIO_CFG_H
#define DIO_CFG_H
#include "Stdtypes.h"

typedef enum
{
	DIO_enuOk = 0,
	DIO_enuNotOk,
	DIO_enuNull
}DIO_tenuErrorStatus;


#define MAX_PORT_Count			4
#define MAX_PinsAtPort			8
#define MAX_Pins				MAX_PinsAtPort*MAX_PORT_Count	// in case of AVR(atmega 32) ===== 32 pins 

//You should get the max pins from the enum for pins 

typedef enum
{
	DIO_PORTA=0,
	DIO_PORTB,	//2
	DIO_PORTC,	//3
	DIO_PORTD	//4
}DIO_tenuPort;

typedef enum
{
	DIO_enuLow = 0,
	DIO_enuHigh

}DIO_tenuPinValue;


typedef enum
{
	DIO_DIR_INPUT = 0,
	DIO_DIR_OUTPUT	//1

}DIO_tenuPinDirection;

typedef enum
{
	DIO_INPUT_Pull_Down = 0,
	DIO_INPUT_Pull_Up

}DIO_enutPinState;
typedef struct
{
	u8 DIO_tenuPinDirection;
	u8 DIO_enutPinState;
	
	
}DIO_strPinCfg_t;








typedef enum
{
	
	// usewr defined data type 
	//	Assigns the number for each pin, using the enum 
    DIO_enuPin,
    DIO_enuPin1=0,
    DIO_enuPin2,
    DIO_enuPin3,
    DIO_enuPin4,
    DIO_enuPin5,
    DIO_enuPin6,
    DIO_enuPin7,
    DIO_enuPin8,
    DIO_enuPin9,
    DIO_enuPin10,
    DIO_enuPin11,
    DIO_enuPin12,
    DIO_enuPin13,
    DIO_enuPin14,
    DIO_enuPin15,
    DIO_enuPin16,
    DIO_enuPin17,
    DIO_enuPin18,
    DIO_enuPin19,
    DIO_enuPin20,
    DIO_enuPin21,
    DIO_enuPin22,
    DIO_enuPin23,
    DIO_enuPin24,
    DIO_enuPin25,
    DIO_enuPin26,
    DIO_enuPin27,
    DIO_enuPin28,
    DIO_enuPin29,
    DIO_enuPin30,
    DIO_enuPin31,
 //	DIO_enuNumberOfPins
 }DIO_tenuPins;






#endif


//						Port A
//Choose from the above option for each pin


/* #define DIO_PIN0_DIR	DIO_DIR_OUTPUT
#define DIO_PIN1_DIR	DIO_DIR_OUTPUT
#define DIO_PIN3_DIR	DIO_DIR_OUTPUT
#define DIO_PIN4_DIR	DIO_DIR_OUTPUT
#define DIO_PIN5_DIR	DIO_DIR_OUTPUT
#define DIO_PIN6_DIR	DIO_DIR_OUTPUT
#define DIO_PIN7_DIR	DIO_DIR_OUTPUT
#define DIO_PIN2_DIR	DIO_DIR_OUTPUT

//						Port B
//Choose from the above option for each pin


#define DIO_PIN8_DIR	DIO_DIR_OUTPUT
#define DIO_PIN9_DIR	DIO_DIR_OUTPUT
#define DIO_PIN10_DIR	DIO_DIR_OUTPUT
#define DIO_PIN11_DIR	DIO_DIR_OUTPUT
#define DIO_PIN12_DIR   DIO_DIR_OUTPUT
#define DIO_PIN13_DIR   DIO_DIR_OUTPUT
#define DIO_PIN14_DIR   DIO_DIR_OUTPUT
#define DIO_PIN15_DIR	DIO_DIR_OUTPUT


//						Port C
//Choose from the above option for each pin


#define DIO_PIN16_DIR   DIO_DIR_OUTPUT
#define DIO_PIN17_DIR   DIO_DIR_OUTPUT
#define DIO_PIN18_DIR   DIO_DIR_OUTPUT
#define DIO_PIN19_DIR   DIO_DIR_OUTPUT
#define DIO_PIN20_DIR   DIO_DIR_OUTPUT
#define DIO_PIN21_DIR   DIO_DIR_OUTPUT
#define DIO_PIN22_DIR   DIO_DIR_OUTPUT
#define DIO_PIN23_DIR   DIO_DIR_OUTPUT






 */
