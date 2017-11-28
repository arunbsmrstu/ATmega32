#include<avr/io.h>
#include<util/delay.h>

int main(){
	char button_status_previous=0;
	DDRB|=0b11111111;
	DDRA&=0b11111110;
	
	
	while(1){
	
			
			char button_status=PINA & (1<<0);
			PORTB|=0b10000000;
			_delay_ms(100);
			PORTB&=0b01111111;
			_delay_ms(100);
			

			if(button_status){
			
						PORTB|=0b01010101;
						PORTB&=0b01010101;
						
						
						
					
			
			}else{
			
					   PORTB|=0b00101011;
				       PORTB&=0b00101011;
						
			
			}
			
			
	
	
	}




}