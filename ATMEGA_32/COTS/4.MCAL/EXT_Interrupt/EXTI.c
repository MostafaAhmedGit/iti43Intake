#include "DIO.h"
#include "EXTI.h"
#include "EXTI_registers.h"
#include "EXTI_config.h"
#include "GI.h"

EXTI_tenuErrorStatus EXTI_enuInit(void)
{
	Global_enuerrorstatusInterruptTurnON();
	return EXTI_enuOk;
}
EXTI_tenuErrorStatus External_Interrupt_enuConfig(u8 EXTI_Pinnum)
{
	
// 	if(EXTI_Pinnum!=DIO_enuPin11&&EXTI_Pinnum!=DIO_enuPin28&&EXTI_Pinnum!=DIO_enuPin27)
// 		return EXTI_enuInvalidPin;
// 	
// 	if(ExternalInterruptMode!=LowLevel&&ExternalInterruptMode!=AnyLogicalChange&&ExternalInterruptMode!=FallingEdge&&ExternalInterruptMode!=RisingEdge)
// 		return EXTI_enuInvalidMode;




// 	if(EXTI_Pinnum==DIO_enuPin11)
// 		SET_BIT(GIFR,5);
// 	else if(EXTI_Pinnum==DIO_enuPin27)
// 		SET_BIT(GIFR,6);
// 	else if(EXTI_Pinnum==DIO_enuPin28)
// 		SET_BIT(GIFR,7);

		switch(EXTI_Pinnum){
			case DIO_enuPin27:
				#if EXTI_INT0_mode==LowLevel
					SET_BIT(GICR,6);
					CLR_BIT(MCUCR,0);
					CLR_BIT(MCUCR,1);
					
				#elif EXTI_INT0_mode==AnyLogicalChange
					SET_BIT(GICR,6);
					//SET_BIT(MCUCR,6);
					SET_BIT(MCUCR,0);
					CLR_BIT(MCUCR,1);
					
				#elif EXTI_INT0_mode==RisingEdge
					SET_BIT(GICR,6);
					SET_BIT(MCUCR,0);
					SET_BIT(MCUCR,1);
					
				#elif EXTI_INT0_mode==FallingEdge
					SET_BIT(GICR,6);
					SET_BIT(MCUCR,1);
			CLR_BIT(MCUCR,0);

				#endif
	break;
	case DIO_enuPin28:			//Int 1		
		#if EXTI_INT1_mode==LowLevel
			SET_BIT(GICR,7);
			CLR_BIT(MCUCR,2);
			CLR_BIT(MCUCR,3);
			
		#elif EXTI_INT1_mode==AnyLogicalChange
			SET_BIT(GICR,7);
			SET_BIT(MCUCR,2);
			CLR_BIT(MCUCR,3);
			
		#elif EXTI_INT1_mode==FallingEdge
			SET_BIT(GICR,7);
			SET_BIT(MCUCR,3);
			CLR_BIT(MCUCR,2);
			
		#elif EXTI_INT1_mode==RisingEdge
			SET_BIT(GICR,7);
			SET_BIT(MCUCR,2);
			SET_BIT(MCUCR,3);
		#endif
		break;
				

	case DIO_enuPin11:		
		#if EXTI_INT2_mode==FallingEdge
			SET_BIT(GICR,5);
			CLR_BIT(MCUCSR,6);
		
		#elif EXTI_INT2_mode==RisingEdge
			SET_BIT(GICR,5);
			SET_BIT(MCUCSR,6);
		
		#endif
	break;	
		}
		/*
	switch(ExternalInterruptMode)	//Switching on the modes than according to the input pin the MCUCSR is manipulated accordingly 
	{
		
		case LowLevel:
							if(EXTI_Pinnum==DIO_enuPin11)	//	INT 2
							{
								//#error You cannot get this mode on this pin!
								//SET_BIT(GICR,5);
								return EXTI_enuInvalidPinRequest;
							}
							
							else if(EXTI_Pinnum==DIO_enuPin28)	// INT 1
							{
								SET_BIT(GICR,7);
								
								CLR_BIT(MCUCR,2);
								CLR_BIT(MCUCR,3);
								
							}
							else if(EXTI_Pinnum==DIO_enuPin27)	//INT 0
							{
								SET_BIT(GICR,6);
								
								CLR_BIT(MCUCR,0);
								CLR_BIT(MCUCR,1);
								
							}
		
		
		break;
		case AnyLogicalChange:
					if(EXTI_Pinnum==DIO_enuPin11)	//	INT 2
					{
						//#error You cannot get this mode on this pin !
						return EXTI_enuInvalidPinRequest;
					}
					
					else if(EXTI_Pinnum==DIO_enuPin28)	// INT 1
					{
						SET_BIT(GICR,7);
						
						
						SET_BIT(MCUCR,2);
						CLR_BIT(MCUCR,3);
						
					}
					else if(EXTI_Pinnum==DIO_enuPin27)	//INT 0
					{
						SET_BIT(GICR,6);
						//SET_BIT(MCUCR,6);
						SET_BIT(MCUCR,0);
						CLR_BIT(MCUCR,1);
					}
			
		break;
		case FallingEdge:
		
				if(EXTI_Pinnum==DIO_enuPin11)	//	INT 2
				{
					SET_BIT(GICR,5);
					CLR_BIT(MCUCSR,6);
				}
				
				else if(EXTI_Pinnum==DIO_enuPin28)	// INT 1
				{
					SET_BIT(GICR,7);
					
					SET_BIT(MCUCR,3);
					CLR_BIT(MCUCR,2);
					
				}
				else if(EXTI_Pinnum==DIO_enuPin27)	//INT 0
				{
					SET_BIT(GICR,6);
					
					
					SET_BIT(MCUCR,1);
					CLR_BIT(MCUCR,0);
				}
		
		case RisingEdge:
		
				if(EXTI_Pinnum==DIO_enuPin11)	//	INT 2
				{
					SET_BIT(GICR,5);
					
					SET_BIT(MCUCSR,6);
				}
				
				else if(EXTI_Pinnum==DIO_enuPin28)	// INT 1
				{
	
				}
				else if(EXTI_Pinnum==DIO_enuPin27)	//INT 0
				{
					SET_BIT(GICR,6);
					
					SET_BIT(MCUCR,0);
					SET_BIT(MCUCR,1);
				}
		
		break;
	}
	
	
		*/
	
	return 0;
}

void __vector_1(void) __attribute__((signal));