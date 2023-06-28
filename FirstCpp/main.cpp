
#define F_CPU 16000000
# include "ExtInt.h"
#include <util/delay.h>
#include <avr/io.h>
#include "GenIO.h"
#include  <avr/interrupt.h>



int main(void)
{
    Led led1(13);
	Led led2(7);
	Led led3(6);
	ExtInt Encoder(1200);
	Encoder.ExtInt::setExtInt0();
	Encoder.ExtInt::setExtInt1();
	

    while (1) 
    {
	
    }
}

