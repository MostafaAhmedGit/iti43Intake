
#include "../../4.MCAL/DIO/DIO_Cfg.h"

const DIO_strPinCfg_t DIO_strPinCfg[MAX_Pins] =
{
	//				PinDirection		PullUp/PullDown
	
//*******************************************************************************************************	PORT A ******************/
	/*	PIN0	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
	/*	PIN1	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
	/*	PIN2	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
	/*	PIN3	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
	/*	PIN4	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
 	/*	PIN5	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
	/*	PIN6	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
	/*	PIN7	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
//*******************************************************************************************************	PORT B ******************/
		
	/*	PIN8	*/ {DIO_DIR_INPUT ,  DIO_INPUT_Pull_Up},
	/*	PIN9	*/ {DIO_DIR_INPUT ,  DIO_INPUT_Pull_Up},
	/*	PIN10	*/ {DIO_DIR_INPUT ,  DIO_INPUT_Pull_Up},
	/*	PIN11	*/ {DIO_DIR_INPUT ,  DIO_INPUT_Pull_Up},
	/*	PIN12	*/ {DIO_DIR_INPUT ,  DIO_INPUT_Pull_Up},
	/*	PIN13	*/ {DIO_DIR_INPUT ,  DIO_INPUT_Pull_Up},
	/*	PIN14	*/ {DIO_DIR_INPUT ,  DIO_INPUT_Pull_Up},
	/*	PIN15	*/ {DIO_DIR_INPUT ,  DIO_INPUT_Pull_Up},
//*******************************************************************************************************	PORT C ******************/	

	/*	PIN16	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
	/*	PIN17	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
	/*	PIN18	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
	/*	PIN19	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
	/*	PIN20	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
	/*	PIN21	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
	/*	PIN22	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
	/*	PIN23	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},
		
//*******************************************************************************************************	PORT D ******************/	
	/*	PIN24	*/ {DIO_DIR_INPUT,  DIO_INPUT_Pull_Up},
	/*	PIN25	*/ {DIO_DIR_INPUT,  DIO_INPUT_Pull_Up},
	/*	PIN26	*/ {DIO_DIR_INPUT,  DIO_INPUT_Pull_Up},
	/*	PIN27	*/ {DIO_DIR_INPUT,  DIO_INPUT_Pull_Up},
	/*	PIN28	*/ {DIO_DIR_INPUT,  DIO_INPUT_Pull_Up},
	/*	PIN29	*/ {DIO_DIR_INPUT,  DIO_INPUT_Pull_Up},
	/*	PIN30	*/ {DIO_DIR_INPUT,  DIO_INPUT_Pull_Up},
	/*	PIN31	*/ {DIO_DIR_INPUT,  DIO_INPUT_Pull_Up},
//	/*	PIN32	*/ {DIO_DIR_OUTPUT ,  DIO_INPUT_Pull_Down},

};