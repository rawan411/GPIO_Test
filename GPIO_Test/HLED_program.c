/**************************************************************************/
/* Name:    HLED_program.c                                                */
/* Author:  Ahmed Ashraf                                                  */
/* Version: v1.0                                                          */
/* Description: This file contains LED module logical program             */
/**************************************************************************/

/************************************************************************/
/*                               Includes                               */
/************************************************************************/

#include "LSTD_TYPES.h"
#include "LBIT_MATH.h"
#include "MDIO_interface.h"
#include "HLED_private.h"
#include "HLED_interface.h"

/************************************************************************/
/*                         Functions' definitions                       */
/************************************************************************/

/*This function is responsible for initializing a chosen LED as OUTPUT*/
void hled_init(u8_t led_number)
{
	/*switch over the led number*/
	switch(led_number)
	{
		//setting led0 as output
		case LED0:
			mdio_pinStatus(LED0_PORT,LED0_PIN,OUTPUT);
			break;
			
		//setting led1 as output	
		case LED1:
			mdio_pinStatus(LED1_PORT,LED2_PIN,OUTPUT);
			break;
		
		//setting led2 as output	
		case LED2:
			mdio_pinStatus(LED2_PORT,LED2_PIN,OUTPUT);
			break;
	}
	
	/*Return from this function*/
	return;
}

/*This function is responsible for setting the chosen LED to ON mode*/
void hled_ledON(u8_t led_number)
{
	/*switch over the led number*/
	switch(led_number)
	{
		//led0 on
		case LED0:
			mdio_setPinValue(LED0_PORT,LED0_PIN,HIGH);
			break;
		
		//led1 on
		case LED1:
			mdio_setPinValue(LED1_PORT,LED1_PIN,HIGH);
			break;
		
		//led2 on
		case LED2:
			mdio_setPinValue(LED2_PORT,LED2_PIN,HIGH);
			break;
	}
	/*Return from this function*/
	return;
}

/*This function is responsible for setting the chosen LED to OFF mode*/
void hled_ledOFF(u8_t led_number)
{
	/*switch over the led number*/
	switch(led_number)
	{
		//led0 OFF
		case LED0:
		mdio_setPinValue(LED0_PORT,LED0_PIN,LOW);
		break;
		
		//led1 OFF
		case LED1:
		mdio_setPinValue(LED1_PORT,LED1_PIN,LOW);
		break;
		
		//led2 OFF
		case LED2:
		mdio_setPinValue(LED2_PORT,LED2_PIN,LOW);
		break;
	}
	/*Return from this function*/
	return;
}

/*This function is responsible for toggling the chosen LED to OFF mode*/
void hled_ledToggle(u8_t led_number)
{
	/*switch over the led number*/
	switch(led_number)
	{
		//led0 toggles
		case LED0:
		mdio_togglePinValue(LED0_PORT,LED0_PIN);
		break;
		
		//led1 toggles
		case LED1:
		mdio_togglePinValue(LED1_PORT,LED1_PIN);
		break;
		
		//led2 toggles
		case LED2:
		mdio_togglePinValue(LED2_PORT,LED2_PIN);
		break;
	}
	/*Return from this function*/
	return;
	
}