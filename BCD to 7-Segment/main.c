#include<avr/io.h>
#include<util/delay.h>

int split(int number){
		int a=number%10;
		int temp=number/10;

}


void display(int number){

		int first=number%10;
		int temp=number/10;
		int second=temp%10;
		temp=temp/10;
		int third=temp%10;
		temp=temp/10;
		int frth=temp%10;
		
        PORTA=(first|0b11110000); 
        PORTA&=~(1<<4);   
        _delay_ms(15);
		
		PORTA=(second|0b11110000); 
        PORTA&=~(1<<5);   
        _delay_ms(15);
		
		PORTA=(third|0b11110000); 
        PORTA&=~(1<<6);   
        _delay_ms(15);
		
		PORTA=(frth|0b11110000); 
        PORTA&=~(1<<7);   
        _delay_ms(15);


}

void main()
  {
		DDRA=0b11111111;
		DDRB=0b11111111;
  
  while(1){
  
		for(int i=0;i<=100;i++){
		display(i);}
		
      }
    
  }
   
 
