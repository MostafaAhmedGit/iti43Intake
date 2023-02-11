//********************************************************************************************/

/*			WRITTEN BY : MOSTAFA AHMED														 */

//********************************************************************************************/


#ifndef _SEVEN_SEG_H
#define _SEVEN_SEG_H
#include "../../1.LIB/Stdtypes.h"	//STD TYPES
#include "SevenSeg_config.h"


//********************************************************************************************/
/*  Function to Initialize the Seven Segment By calling the DIO		*/

/*  Initialize function that sets the ports of the target to output */				

/*	Input  : Seven Segment Number you want to Initialize         */

/*  Output : Writes VCC on the COM to trigger the 7seg           */

/*				Returns : DIO_error Status						*/

//********************************************************************************************/

SevSeg_tenuErrorStatus SevenSeg_enuErrorStatusInit(void);






//********************************************************************************************/

/*	Input  : Seven Segment Number you want to write on + Displays the figure				 */

/*  Output : Writes VCC on the seven Segment, according to the figure you want to display    */

/*				Returns : SevSeg_error Status												 */

//********************************************************************************************/
SevSeg_tenuErrorStatus Display_OnSevSeg_ErrorStat(u8 SevenSeg_num,u8 DisplayThisFig);











//********************************************************************************************/
/*	Input  : Seven Segment Number you want to write on										   */

/*  Output : Writes a signal on the COM to turn off the 7seg							      */

/*				Returns : SevSeg_error Status												 */

//********************************************************************************************/

SevSeg_tenuErrorStatus void_TurnOFF(u8 SevenSeg_num);


#endif