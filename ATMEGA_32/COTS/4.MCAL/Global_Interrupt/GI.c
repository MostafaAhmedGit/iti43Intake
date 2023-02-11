/****************************************************************/

/*			Written by: Mostafa Ahmed							*/

/****************************************************************/
#include "GI.h"
#include "Gl_register.h"
#include "GI_config.h"
#include "Bitmath.h"



//#define Global_void_InterruptTurnON()			(SREG)|=(1<<7)
//#define Global_void_InterruptTurnOFF()		(SREG)&=~(1<<7)

void Global_enuerrorstatusInterruptTurnON(void)
{
	//SREG=(SREG)|(1<<7);
	SET_BIT(SREG,I_bit);
}
void Global_enuerrorstatusInterruptTurnOFF(void)
{
	//SREG=(SREG)&(~(1<<7));
	CLR_BIT(SREG,I_bit);
}

