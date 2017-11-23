#include<avr/io.h>
#include<util/delay.h>
char b1_p=0;
char b2_p=0;

int main(){

	DDRA=DDRA | 0b00000011;
	DDRA=DDRA & 0b11110011;

	while(1){

		char b1_c=PINA & 0b00000100;
	    char b2_c=PINA & 0b00001000;


	if(b1_c && (b1_c!=b1_p))
		PORTA=PORTA ^ 0b00000001;
		//_delay_ms(500);

	if(b2_c && (b2_c!=b2_p))
		PORTA=PORTA ^ 0b00000010;
		//_delay_ms(500);



		b1_p=b1_c;
		b2_p=b2_c;


	}
}
