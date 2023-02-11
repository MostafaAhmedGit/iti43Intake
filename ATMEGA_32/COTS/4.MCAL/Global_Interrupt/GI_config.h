/****************************************************************/

/*			Written by: Mostafa Ahmed							*/

/****************************************************************/




#include "Stdtypes.h"               

//			The AVR Status Register – SREG – is defined as:      Bit 7	Bit 6	Bit 5	Bit 4	Bit 3	Bit 2	Bit 1	Bit 0

//										I	  T       H       S        V       N       Z      C	
 
//	I-Bit is the Global Interrupt Enable bit 




#define I_bit	7


typedef enum
{
	GINT_enuOk = 0,
	GINT_enuNotOk,
	GINT_enuNull
}GINT_tenuErrorStatus;
