#include <avr/io.h>
#include <util/delay.h>
int d=5;

void display(char *segment, unsigned char seg ,char *port, unsigned char data){
	
	*segment = 0b11111111;
	*port= data;
	*segment = ~(1<<(seg-1));
	_delay_ms(5);
}


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
		
		        /*PORTA=(split_number[4-1]|0b11110000); 
                PORTA&=~(1<<4);   
                _delay_ms(d);
		
		        PORTA=(split_number[4-2]|0b11110000); 
                PORTA&=~(1<<5);   
                _delay_ms(d);
		
		        PORTA=(split_number[4-3]|0b11110000); 
                PORTA&=~(1<<6);   
                _delay_ms(d);
		
		        PORTA=(split_number[4-4]|0b11110000); 
                PORTA&=~(1<<7);   
                _delay_ms(d);*/
		

}
/*

void Seven_segment_four_B(unsigned int number){

		unsigned int split_number[4]={0,0,0,0};
		
		int n=4;
		while(number!=0){
			split_number[n-1]=number%10;
			number=number/10;
			n--;
		}
		
		
		
		        PORTB=(split_number[4-1]|0b11110000); 
                PORTB&=~(1<<4);   
                _delay_ms(d);
		
		        PORTB=(split_number[4-2]|0b11110000); 
                PORTB&=~(1<<5);   
                _delay_ms(d);
		
		        PORTB=(split_number[4-3]|0b11110000); 
                PORTC&=~(1<<6);   
                _delay_ms(d);
		
		        PORTB=(split_number[4-4]|0b11110000); 
                PORTB&=~(1<<7);   
                _delay_ms(d);
		

}


void Seven_segment_four_C(unsigned int number){

		unsigned int split_number[4]={0,0,0,0};
		
		int n=4;
		while(number!=0){
			split_number[n-1]=number%10;
			number=number/10;
			n--;
		}
		
		
		
		        PORTC=(split_number[4-1]|0b11110000); 
                PORTC&=~(1<<4);   
                _delay_ms(d);
		
		        PORTC=(split_number[4-2]|0b11110000); 
                PORTC&=~(1<<5);   
                _delay_ms(d);
		
		        PORTC=(split_number[4-3]|0b11110000); 
                PORTC&=~(1<<6);   
                _delay_ms(d);
		
		        PORTC=(split_number[4-4]|0b11110000); 
                PORTC&=~(1<<7);   
                _delay_ms(d);
		

}


void Seven_segment_four_D(unsigned int number){

		unsigned int split_number[4]={0,0,0,0};
		
		int n=4;
		while(number!=0){
			split_number[n-1]=number%10;
			number=number/10;
			n--;
		}
		
		
		
		        PORTD=(split_number[4-1]|0b11110000); 
                PORTD&=~(1<<4);   
                _delay_ms(d);
		
		        PORTD=(split_number[4-2]|0b11110000); 
                PORTD&=~(1<<5);   
                _delay_ms(d);
		
		        PORTD=(split_number[4-3]|0b11110000); 
                PORTD&=~(1<<6);   
                _delay_ms(d);
		
		        PORTD=(split_number[4-4]|0b11110000); 
                PORTD&=~(1<<7);   
                _delay_ms(d);
		

}*/