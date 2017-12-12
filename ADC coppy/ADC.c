#include<avr/io.h>
#include<util/delay.h>

void adc_init(){
	ADMUX |= (1<<REFS0);						//Reference Selection
	ADCSRA |= (1<<ADPS1)|(1<<ADPS2)|(1<<ADPS0);						//Division Factor 4>>250 kHz
	ADCSRA |= (1<<ADEN); 						//Enabling ADC
}

int adc_read(int chanel){
	adc_init();
	ADMUX |= chanel;									//Channel selection AC0
	ADCSRA |= (1<<ADSC);
    while(ADCSRA&0b01000000){
	    }						//Start Convertion
	int value = ADCL;							//Store Value 
	value |= (ADCH<<8);						
	return(value);
}