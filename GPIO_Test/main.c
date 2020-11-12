

/*Library Files*/
#include "LBIT_MATH.h"
#include "LSTD_TYPES.h"
#include "MDIO_interface.h"

/*delay file*/
#define F_CPU 16000000UL
#include "util/delay.h"

/*LED pins*/
#define LED0 PIN2
#define LED1 PIN7
#define LED2 PIN3

/*Button pins*/
#define Button0 PIN0
#define Button1 PIN4
#define Button2 PIN2

int main(void)
{
	hled_init(0);
	hled_init(1);
	hled_init(2);
	
	while (1)
	{
		hled_ledON(0);
		_delay_ms(1000);
		hled_ledOFF(0);
		hled_ledToggle(1);
		_delay_ms(1000);
		hled_ledToggle(2);
		
	}
	//mdio_pinStatus(PORTA,LED0 | LED1, OUTPUT);
	//mdio_pinStatus(PORTD,LED2,OUTPUT);
	
	//mdio_pinStatus(PORTB,Button0 | Button1,INPUT_FLOAT);
	//mdio_pinStatus(PORTD, Button2,INPUT_FLOAT);
	
	//while(1)
	//{
		
		/*if(mdio_getPinValue(PORTB,Button0) || mdio_getPinValue(PORTB,Button1) || mdio_getPinValue(PORTD,Button2))
		{
			mdio_setPinValue(PORTC,LED0 | LED1 ,HIGH);
			mdio_setPinValue(PORTD,LED2,HIGH);
		}
		else
		{
			mdio_setPinValue(PORTC,LED0 | LED1 ,LOW);
			mdio_setPinValue(PORTD,LED2,LOW);		
		}
		//_delay_ms(2000);
		
	}
	*/

//while(1)
//{
//		mdio_togglePinValue(PORTD,LED2);
	//	_delay_ms(1000);
//}
	return 0;
}

