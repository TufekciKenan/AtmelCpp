#include "GenIO.h"

void setPinDDR(uint8_t pn){
	switch (pn)
	{
		case  0	:	DDRD|=(1<<PIND0); break;
		case  1	:	DDRD|=(1<<PIND1); break;
		case  2	:	DDRD|=(1<<PIND2); break;
		case  3	:	DDRD|=(1<<PIND3); break;
		case  4	:	DDRD|=(1<<PIND4); break;
		case  5	:	DDRD|=(1<<PIND5); break;
		case  6	:	DDRD|=(1<<PIND6); break;
		case  7	:	DDRD|=(1<<PIND7); break;
		
		case  8	:	DDRB|=(1<<PINB0); break;
		case  9	:	DDRB|=(1<<PINB1); break;
		case 10	:	DDRB|=(1<<PINB2); break;
		case 11 :	DDRB|=(1<<PINB3); break;
		case 12	:	DDRB|=(1<<PINB4); break;
		case 13	:	DDRB|=(1<<PINB5); break;

	}
}

Led::Led(uint8_t pinNumber):pinNumber(pinNumber)
{
	setPinDDR(pinNumber);
}

void Led::On(){
	switch(pinNumber) {
	case  0	:	PORTD|=(1<<PIND0); break;
	case  1	:	PORTD|=(1<<PIND1); break;
	case  2	:	PORTD|=(1<<PIND2); break;
	case  3	:	PORTD|=(1<<PIND3); break;
	case  4	:	PORTD|=(1<<PIND4); break;
	case  5	:	PORTD|=(1<<PIND5); break;
	case  6	:	PORTD|=(1<<PIND6); break;
	case  7	:	PORTD|=(1<<PIND7); break;
				
	case  8	:	PORTB|=(1<<PINB0); break;
	case  9	:	PORTB|=(1<<PINB1); break;
	case 10	:	PORTB|=(1<<PINB2); break;
	case 11 :	PORTB|=(1<<PINB3); break;
	case 12	:	PORTB|=(1<<PINB4); break;
	case 13	:	PORTB|=(1<<PINB5); break;

	}
	
}

void Led::Off(){
	switch(pinNumber) {
		case  0	:	PORTD&=~(1<<PIND0); break;
		case  1	:	PORTD&=~(1<<PIND1); break;
		case  2	:	PORTD&=~(1<<PIND2); break;
		case  3	:	PORTD&=~(1<<PIND3); break;
		case  4	:	PORTD&=~(1<<PIND4); break;
		case  5	:	PORTD&=~(1<<PIND5); break;
		case  6	:	PORTD&=~(1<<PIND6); break;
		case  7	:	PORTD&=~(1<<PIND7); break;
						
		case  8	:	PORTB&=~(1<<PINB0); break;
		case  9	:	PORTB&=~(1<<PINB1); break;
		case 10	:	PORTB&=~(1<<PINB2); break;
		case 11 :	PORTB&=~(1<<PINB3); break;
		case 12	:	PORTB&=~(1<<PINB4); break;
		case 13	:	PORTB&=~(1<<PINB5); break;

	}
	
}