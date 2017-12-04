#include<avr/io.h>
#include<util/delay.h>

int main(){

	DDRA=0b11111111;
	DDRB=0b11111111;
	
	while(1){
	
	 int value[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7c,0x07,0x7f,0x6f};
	 int first_segment=0,second_segment=0;
			
		
		
		for(int i=0;i<45;i++){
			first_segment=i/10;
			second_segment=i%10;
			
			PORTB=0b00001111;
			PORTA=0x5b;
			PORTB=0b00000111;
			_delay_ms(30);
			
			PORTB=0b00001111;
			PORTA=0x3f;
			PORTB=0b00001011;
			_delay_ms(30);
			
			PORTB=0b00001111;
			PORTA=value[first_segment];
			PORTB=0b00001101;
			_delay_ms(30);
			
			
			PORTB=0b00001111;
			PORTA=value[second_segment];
			PORTB=0b00001110;
			_delay_ms(30);
			
			
			
		
		}
	
		
		
	}




}



/*PORTB=0b00001111;
	    PORTA=value[0];
		PORTB=0b00001110;
		_delay_ms(mydelay);
		
		PORTB=0b00001111;
	    PORTA=value[1];
		PORTB=0b00001101;
		_delay_ms(mydelay);
		
		PORTB=0b00001111;
	    PORTA=value[2];
		PORTB=0b00001011;
		_delay_ms(mydelay);
		
		PORTB=0b00001111;
	    PORTA=value[4];
		PORTB=0b00000111;
		_delay_ms(mydelay);*/
		

