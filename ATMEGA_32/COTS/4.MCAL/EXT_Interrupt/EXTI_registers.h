/*
 * Written By: Mostafa AHMED
 *    Github : https://github.com/MostafaAhmedGit
*/


#ifndef EXTI_REGISTERS_H_
#define EXTI_REGISTERS_H_

#define MCUCR	*((volatile u8 *)0x55)
#define MCUCSR	*((volatile u8 *)0x54)
#define GIFR    *((volatile u8 *)0x5A)
#define GICR    *((volatile u8 *)0x5B)

#endif