#include<avr/io.h>
#include<util/delay.h>
int a,b;

void main()
  {
		DDRA=0b11111111;
		DDRB=0b11111111;
  
  while(1){
  
	
	for(b=0;b<=45;b++)
      {
		int first=b/10;
		int second=b%10;
		
        PORTB=0b11111111; 
		PORTA=second;
        PORTB=0b11111110;   
        _delay_ms(30);

		PORTB=0b11111111; 
		PORTA=first;
        PORTB=0b11111101;   
        _delay_ms(30);
		
		PORTB=0b11111111; 
		PORTA=0;
        PORTB=0b11111011;   
        _delay_ms(30);

		PORTB=0b11111111; 
		PORTA=2;
        PORTB=0b11110111;   
        _delay_ms(30);
      }
    
  }
   
 }
