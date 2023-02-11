/*************************************************************
 * 
 * Filename: KEYPAD.h
 * Description: Header (interface) file of the KEYPAD driver.
 * Author: Eng. Mostafa Ahmed
 * Github: https://github.com/MostafaAhmedGit
 * 
 *************************************************************/

#ifndef __KEYPAD_H__
#define __KEYPAD_H__
#include "KEYPAD_Cfg.h"

Keypad_enuErrorStatus Keypad_enuInit(void);
KEYPAD_enuRETURN_IfPressed Keypad_enuWHAT_IS_PRESSED(KEYPADS_IN_SYS Keypad_enuNum);



#endif /* __KEYPAD_H__ */