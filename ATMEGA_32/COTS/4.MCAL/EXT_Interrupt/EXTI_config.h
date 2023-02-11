/*
 * Written By: Mostafa AHMED
 *    Github : https://github.com/MostafaAhmedGit
*/


#ifndef EXTI_CONFIG_H_
#define EXTI_CONFIG_H_


#define EXTI_INT0_mode	FallingEdge
#define EXTI_INT1_mode	FallingEdge
#define EXTI_INT2_mode	FallingEdge

typedef enum
{
	EXTI_enuOk = 0,
	EXTI_enuInvalidMode,
	EXTI_enuInvalidPin,
	EXTI_enuInvalidPinRequest
	
	
}EXTI_tenuErrorStatus;


typedef enum
{
	LowLevel = 0,
	AnyLogicalChange,
	FallingEdge,
	RisingEdge
}EXTI_tenuEXTI_mode;


#endif