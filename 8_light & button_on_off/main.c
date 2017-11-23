#include<avr/io.h>
#include<util/dealay.h>

int main(){

		DDRB=DDRB | 0b01111111;
		DDRA=DDRA & 0b11111110;
		
		while(1){
		
			char button_status=PINA & 0b00000001;
			
			
			if(button_status){
			
				PORTB=PORTB | 0b01010101;
				PORTB=PORTB & 0b01010101;
			}
			else{
			
				PORTB=PORTB | 0b00101011;
				PORTB=PORTB & 0b00101011;
			}
		
		
		}



}