#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "SevSeg_Private.h"


u32 Glo_nums[10] = {zero, one, two, three, four, five, six, seven, eight, nine};

void SevSeg_VidDisplayNum(u8 Copy_U8Port, u8 Copy_U8Num)
{
    #if SEG_TYPE == COMM_ANA
    DIO_VidSetPortDirection(Copy_U8Port,Glo_nums[Copy_U8Num]);
    DIO_VidSetPortValue(Copy_U8Port, Glo_nums[Copy_U8Num]);

    #elif SEG_TYPE == COMM_KATH
    DIO_VidSetPortDirection(Copy_U8Port,Glo_nums[Copy_U8Num]);
    DIO_VidSetPortValue(Copy_U8Port, Glo_nums[~ Copy_U8Num]);

    #else
		#error "Wrong input"
    #endif
}
