/*************************************************************
 * 
 * Filename: KEYPAD_Cfg.h
 * Description: Configuration header file of the KEYPAD driver.
 * Author: Eng. Mostafa Ahmed
 * Github: https://github.com/MostafaAhmedGit
 * 
 *************************************************************/

#ifndef __KEYPAD_CFG_H__
#define __KEYPAD_CFG_H__

#include "Stdtypes.h"

#define KEYPAD_4by_4_0	0

#define Active_Low	1
#define Active_High 2

// #define Keypad_N_3

#define Keypad_N_4_0_ACTIVE_WHAT	Active_Low

#define HOW_MANY_4_BY_4_KEYPADS_CONNECTED	1
#define HOW_MANY_3_BY_3_KEYPADS_CONNECTED	0


typedef enum
{
	zero=0,
	one,
	two,
	three,
	four,
	five,
	six,
	seven,
	eight,
	nine,
	a,
	b,
	c,
	d,
	asterisk,
	hash
	
}KEYPAD_enuRETURN_IfPressed;
typedef enum 
{
	Keypad_enuOK = 1,
	Keypad_enuNOK
}Keypad_enuErrorStatus;

typedef enum
{
	Keypad_num_1 = 1,
	Keypad_num_2
}KEYPADS_IN_SYS;

// typedef enum
// {
// 	Active_Low = 1,
// 	Active_High
// }KEYPADS_Active_what_t;

typedef struct
{
	
	/*KEYPADS_Active_what_t Active_What;*/
	u8 port;
	u8 row1;
	u8 row2;
	u8 row3;
	
	u8 col1;
	u8 col2;
	u8 col3;
	
}KEYPAD_DATA_N_3_t;
typedef struct  
{
	/*KEYPADS_Active_what_t Active_What;*/
	u8 port;
	u8 row1;
	u8 row2;
	u8 row3;
	u8 row4;
	
	u8 col1;
	u8 col2;
	u8 col3;
	u8 col4;
	
}KEYPAD_DATA_N_4_t;


#if HOW_MANY_3_BY_3_KEYPADS_CONNECTED>0
extern const KEYPAD_DATA_N_3_t KEYPAD_DATA[HOW_MANY_3_BY_3_KEYPADS_CONNECTED];
#else
#endif


/*#if HOW_MANY_4_BY_4_KEYPADS_CONNECTED>0*/
extern const KEYPAD_DATA_N_4_t KEYPAD_4_by_4_DATA[HOW_MANY_4_BY_4_KEYPADS_CONNECTED];
// #else
// #endif


#endif /* __KEYPAD_CFG_H__ */