#include<avr/io.h>
#include<util/delay.h>

int main(){

	DDRB=0b11111111;
	
	
	while(1){
	    PORTB=0b00000001;
		_delay_ms(500);
		for(int i=1;i<=8;i++){
			PORTB=PORTB<<1;
			_delay_ms(500);
		}
		PORTB=0b11111111;
		_delay_ms(500);
		PORTB=0b10000000;
		_delay_ms(500);
		for(int i=1;i<=8;i++){
			PORTB=PORTB>>1;
			_delay_ms(500);
		}
		PORTB=0b11111111;
		_delay_ms(500);
	
	}



}