#include<avr/io.h>
#include<util/delay.h>

int main(){


	DDRB |= 0b01111111; //OUTPUT
	DDRA &= 0b11111110; //INPUT
	
	
	while(1){
	
	
		char button_status = PINA & 0b00000001;//check button status
		
		if(button_status){
		
				
				PORTB |= 0b01010101;
				PORTB &= 0b01010101;
		
		}else{
		
			PORTB |= 0b00101011;
			PORTB &= 0b00101011;
		
		}
		
	
	
	
	}



}