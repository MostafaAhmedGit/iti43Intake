/*
			Written By: Mostafa Ahmed
			Version	  : V01
			Date      : 10.2.23

*/



void Delay_ITI43_milli_seconds(unsigned int Delay_u32MilliSeconds)
{
	volatile unsigned long long Local_u64Counter;
	
	for(Local_u64Counter=0;Local_u64Counter<Delay_u32MilliSeconds;Local_u64Counter++)
	{
		__asm__ __volatile__ ("nop");
		
		/*
		The __volatile__ modifier on an __asm__ block forces the compiler's optimizer to execute the code as-is. 
		Without it, the optimizer may think it can be either removed outright,
		or lifted out of a loop and cached.

		*/
	}
}