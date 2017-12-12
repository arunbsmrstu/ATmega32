#include <avr/io.h>
#include<seven_segment.h>
#include <util/delay.h>

int d=5;

int *Seven_segment( int number){

		unsigned int split_number[4]={0,0,0,0};
		
		int n=4;
		while(number!=0){
			split_number[n-1]=number%10;
			number=number/10;
			n--;
		}
		
        return 	(split_number);	
		
		

}






void main(){

			DDRC=0b11111111;
			
			while(1){
			
				for(int i=0;i<=100;i++){
				int *numbers=Seven_segment(i);
				
					
		        PORTC=(numbers[4-1]|0b11110000); 
                PORTC&=~(1<<4);   
                _delay_ms(d);
		
		        PORTC=(numbers[4-2]|0b11110000); 
                PORTC&=~(1<<5);   
                _delay_ms(d);
		
		        PORTC=(numbers[4-3]|0b11110000); 
                PORTC&=~(1<<6);   
                _delay_ms(d);
		
		        PORTC=(numbers[4-4]|0b11110000); 
                PORTC&=~(1<<7);   
                _delay_ms(d);
				}
			
		}
            
}
