#include<avr/io.h>
#include<util/delay.h>

int main(){
  
  DDRB=DDRB | 0b11111111; 
  DDRA=DDRA & 0b11111110; 
 // PORTB = 0b00000001;
  
  while(1){
 
  char button1_status = PINA & 0b00000001; 
 
  PORTB=PORTB | 0b00000001;
  PORTB=PORTB & 0b01111111;
  
  if(button1_status){
	PORTB=PORTB | 0b01010100; 
	PORTB=PORTB & 0b11010101;


  }else{

	PORTB=PORTB | 0b00101010; 
	PORTB=PORTB & 0b10101011;
	}
  //_delay_ms(500);
 
  
  /*if(PINA & 0b01010101){
	PORTB=0b01010101;
	_delay_ms(500);
	}
	
	else{
		PORTB=0b10101011;
		_delay_ms(500);
	}
	*/
	
	

}
}

