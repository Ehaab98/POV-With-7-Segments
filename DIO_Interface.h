/*************************************************************************************************************************************************************************/
/*************************************************************************************************************************************************************************/
/*********************************************************    Auther: Mohamed Ehab      **********************************************************************************/
/*********************************************************    File: Interface of DIO    **********************************************************************************/
/*********************************************************    Date:3/9/2022             **********************************************************************************/
/*********************************************************    Version: 1                **********************************************************************************/
/*********************************************************    Desc:                     **********************************************************************************/
/*************************************************************************************************************************************************************************/
/*************************************************************************************************************************************************************************/




#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_


void DIO_VidSetPinDirection(u8 Copy_U8Port, u8 Copy_U8Pin, u8 Copy_U8Direction);

void DIO_VidSetPinValue(u8 Copy_U8Port, u8 Copy_U8Pin, u8 Copy_U8Value);

u8 DIO_U8GetPinValue(u8 Copy_U8Port, u8 Copy_U8Pin);

void DIO_VidTooglePinValue(u8 Copy_U8Port, u8 Copy_U8Pin);

void DIO_VidSetPortValue(u8 Copy_U8Port,  u8 Copy_U8Value);

void DIO_VidSetPortDirection(u8 Copy_U8Port, u8 Copy_U8Direction);

#endif