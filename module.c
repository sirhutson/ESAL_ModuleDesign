//**Quick Instructions**//

//This is the c file for Quiz3.
//Insert your code and documentation as described in the
//software design lecture.  
//Only insert code in between your group number and before
//the next group number for each section.  
//Do not delete any text.


//**Begin File**//

//descriptions************

//group1

//group2

//group3

//group4

//group5

//group6



//external variables *********

//group1

//group2

//group3

//group4

//group5

//group6


//includes************

#include "module.h"

//defines************
													//ring has 60 leds*
//group1

//group2

//group3

//group4

//group5

//group6

//structs************

//group1

//group2

//group3

//group4

//group5

//group6


//global variables ************


//group1

//group2

//group3

//group4

//group5

//group6

//private prototypes ************

//group1

//group2

//group3

//group4

//group5

//group6

//code ************

//group1

//group2

//group3
void setupPins(Char port, uint32_t pin);
{
	port = toupper(port);
	switch(port)
	{
   		case 'A'  :
      		SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
		switch (pin)
		{
			case 0 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_0);
			break;

			case 1 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_1);
			break;

			case 2 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_2);
			break;

			case 3 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_3);
			break;

			case 4 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_4);
			break;

			case 5 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_5);
			break;

			case 6 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_6);
			break;

			case 7 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_7);
			break;
		}

      		break;
	
   		case 'B'  :
      		SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
		switch (pin)
		{
			case 0 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTB_BASE, GPIO_PIN_0);
			break;

			case 1 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTB_BASE, GPIO_PIN_1);
			break;

			case 2 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTB_BASE, GPIO_PIN_2);
			break;

			case 3 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTB_BASE, GPIO_PIN_3);
			break;

			case 4 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTB_BASE, GPIO_PIN_4);
			break;

			case 5 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTB_BASE, GPIO_PIN_5);
			break;

			case 6 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTB_BASE, GPIO_PIN_6);
			break;

			case 7 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTB_BASE, GPIO_PIN_7);
			break;
		}
      		break;

   		case 'C'  :
      		SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
		switch (pin)
		{
			case 0 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_0);
			break;

			case 1 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_1);
			break;

			case 2 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_2);
			break;

			case 3 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_3);
			break;

			case 4 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_4);
			break;

			case 5 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_5);
			break;

			case 6 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_6);
			break;

			case 7 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_7);
			break;
		}
      		break;

   		case 'D'  :
      		SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
		switch (pin)
		{
			case 0 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_0);
			break;

			case 1 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_1);
			break;

			case 2 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_2);
			break;

			case 3 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_3);
			break;

			case 4 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_4);
			break;

			case 5 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_5);
			break;

			case 6 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_6);
			break;

			case 7 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_7);
			break;
		}
      		break;

   		case 'E'  :
      		SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);
		switch (pin)
		{
			case 0 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTE_BASE, GPIO_PIN_0);
			break;

			case 1 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTE_BASE, GPIO_PIN_1);
			break;

			case 2 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTE_BASE, GPIO_PIN_2);
			break;

			case 3 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTE_BASE, GPIO_PIN_3);
			break;

			case 4 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTE_BASE, GPIO_PIN_4);
			break;

			case 5 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTE_BASE, GPIO_PIN_5);
			break;

			case 6 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTE_BASE, GPIO_PIN_6);
			break;

			case 7 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTE_BASE, GPIO_PIN_7);
			break;
		}
      		break;

   		case 'F'  :
      		SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
		switch (pin)
		{
			case 0 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_0);
			break;

			case 1 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1);
			break;

			case 2 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_2);
			break;

			case 3 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_3);
			break;

			case 4 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_4);
			break;

			case 5 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_5);
			break;

			case 6 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_6);
			break;

			case 7 :
    			GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_7);
			break;
		}
      		break;

WSPort = port;
WSPin = pin;
}

void sendOne(void);
{

}

//group4

//group5

//group6
