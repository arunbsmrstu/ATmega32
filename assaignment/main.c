#include<avr/io.h>
#include<util/delay.h>
int d=100;


int revers_number(int n)
  {
    int reversedInteger = 0, remainder, originalInteger;

   

    originalInteger = n;

    // reversed integer is stored in variable 
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    
    
    return  reversedInteger;
}



void display(int number){

		int first=number%10;
		int temp=number/10;
		int second=temp%10;
		temp=temp/10;
		int third=temp%10;
		temp=temp/10;
		int frth=temp%10;
		
        PORTC=(first|0b11110000); 
        PORTC&=~(1<<4);   
        _delay_ms(d);
		
		PORTC=(second|0b11110000); 
        PORTC&=~(1<<5);   
        _delay_ms(d);
		
		PORTC=(third|0b11110000); 
        PORTC&=~(1<<6);   
        _delay_ms(d);
		
		PORTC=(frth|0b11110000); 
        PORTC&=~(1<<7);   
        _delay_ms(d);


}

void main()
  {
		DDRC=0b11111111;
		DDRB=0b11111111;
		
		int number=0;    
		     
  
  while(1){
			
  
			for(int i=0;i<=9;i++){
			
				number=number*10+i;
				display(number);
				_delay_ms(100);
				if(number%10==0){
				int rev=revers_number(number);
				int temp=rev/10;
				number=revers_number(temp)*10;}
				else if(number>=1234){
				int rev=revers_number(number);
				int temp=rev/10;
				number=revers_number(temp);}
				
				

			}

		}
		
      }
    
  
  
  
 
