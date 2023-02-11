/*
 * Written By: Mostafa AHMED
 *    Github : https://github.com/MostafaAhmedGit
*/



#ifndef EXTI_H_
#define EXTI_H_
#include "EXTI_config.h"
EXTI_tenuErrorStatus EXTI_enuInit(void);
EXTI_tenuErrorStatus External_Interrupt_enuConfig(u8 EXTI_Pinnum);
EXTI_tenuErrorStatus External_Interrupt_enuTurnOFF(u8 EXTI_Pinnum);
void __vector_1(void)__attribute__((signal));

#endif