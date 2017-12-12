#include <avr/io.h>
#include <util/delay.h>
int d=1;
void Seven_segment(char *segment,unsigned int number){

		unsigned int split_number[4]={0,0,0,0};
		
		int n=4;
		while(number!=0){
			split_number[n-1]=number%10;
			number=number/10;
			n--;
		}
				
		        *segment=(split_number[4-1]|0b11110000); 
                *segment&=~(1<<4);   
                _delay_ms(d);
		
		        *segment=(split_number[4-2]|0b11110000); 
                *segment&=~(1<<5);   
                _delay_ms(d);
		
		        *segment=(split_number[4-3]|0b11110000); 
                *segment&=~(1<<6);   
                _delay_ms(d);
		
		        *segment=(split_number[4-4]|0b11110000); 
                *segment&=~(1<<7);   
                _delay_ms(d);
}
