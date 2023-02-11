/****************************************************************/

/*			Written by: Mostafa Ahmed							*/

/****************************************************************/



#ifndef GI_REGISTER_H
#define GI_REGISTER_H
#include "Stdtypes.h"

#define SREG	*((volatile u8 *) 0x5F)		//SET bit 7 to enable the external Interrupt



//#define GIFR    ((volatile u8* ) 0x5A)
//#define GICR	((volatile u8* ) 0x5B)		// SET THE 1st 2 bits to enable interrupts
//#define MCUCSR	((volatile u8* ) 0x55)

#endif