
#define F_CPU 16000000UL

#ifdef F_CPU 
#include <util/delay.h>
#endif

#include "ExtInt.h"
#include <avr/io.h>
#include "GenIO.h"
#include  <avr/interrupt.h>



    Led led1(13);
    Led led2(7);
    Led led3(6);
    ExtInt Encoder(1200);
    
int main(void)
{

	Encoder.setExtInt0();
	Encoder.setExtInt1();
	DDRD|=(1<<PIND6);
	DDRD|=(1<<PIND7);
	

    while (1) 
    {
		if (Encoder.getSayac()%3==0) { PORTD|=(1<<PIND7);PORTD&=~(1<<PIND6);PORTB&=~(1<<PINB5); }
		else if(Encoder.getSayac()%3==1 ) { PORTD|=(1<<PIND6); PORTD&=~(1<<PIND7); PORTB&=~(1<<PINB5); }
		else if(Encoder.getSayac()%3==2 ) { PORTD&=~(1<<PIND6); PORTD&=~(1<<PIND7); PORTB|=(1<<PINB5); }
		//if (sayac==0) { led1.On(); led2.Off(); led3.Off();}
		//if (sayac>0) { led1.Off(); led2.On(); led3.Off();}
		//if (sayac<0) { led1.Off(); led2.Off(); led3.On();}
		
	
    }
}

