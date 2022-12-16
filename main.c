/*
 *
 *  Created on: Sep 8, 2022
 *      Author: Mohamed Ehab
 */
#include <avr/delay.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "SevSeg_Interface.h"

int main (void)
{


	while(1)
	{
		for(u8 i =0; i<10; i++)
		{
			for(u8 j=0; j<10; j++)
			{

				for(u8 x = 0; x<40; x++)
				{
					SevSeg_VidDisplayNum99(0,1,0,1,j,i);
				}
			}
		}
	}
}

void SevSeg_VidDisplayNum99(u8 Copy_u8MainPort,u8 Copy_u8SubPort,u8 Copy_u8SubPin1,u8 Copy_u8SubPin2,u8 Copy_u8NumOnes,u8 Copy_u8NumTens)
{
	DIO_VidSetPinDirection(Copy_u8SubPort,Copy_u8SubPin1,1);
	DIO_VidSetPinDirection(Copy_u8SubPort,Copy_u8SubPin2,1);
	DIO_VidSetPinValue(Copy_u8SubPort,Copy_u8SubPin1,1);
	DIO_VidSetPinValue(Copy_u8SubPort,Copy_u8SubPin2,1);

	DIO_VidSetPinValue(Copy_u8SubPort,Copy_u8SubPin1,0);
	SevSeg_VidDisplayNum(Copy_u8MainPort,Copy_u8NumOnes);
	_delay_ms(15);
	DIO_VidSetPinValue(Copy_u8SubPort,Copy_u8SubPin1,1);

	DIO_VidSetPinValue(Copy_u8SubPort,Copy_u8SubPin2,0);
	SevSeg_VidDisplayNum(Copy_u8MainPort,Copy_u8NumTens);
	_delay_ms(10);
}
