/****************************************************************/

/*			WRITTEN BY : MOSTAFA AHMED							*/

/****************************************************************/

#ifndef _BUTTON_H
#define _BUTTON_H
#include "Stdtypes.h"
#include "Button_Config.h"






//**************************************************************************//

//Button Number to check if the button is pressed or not ?

//			Input--------------------------->Button number && Ptr value 

//			Output------------> Updates the Ptr with the pointer status 

//				    if the button is pressed it return 1 to the pointer

//					if the button isn't pressed a 0 is returned to  ptr

//**************************************************************************//

u8 isButtonPressed(u8 Button_num,u8 *Ptr_val);


#endif