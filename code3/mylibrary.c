#include<avr/io.h>
#include<util/delay.h>


void bottomtotop(){

	PORTA = 0b10000000;
	for(char i=0;i<=7;i++){
	
		PORTA = 0b10000000>>i;
		_delay_ms(500);
	
	}

	

}