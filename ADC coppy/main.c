#include<avr/io.h>
#include<util/delay.h>
#include<ADC.h>
#include<seven_segment.h>


void  main(){
	DDRC = 0b11111111;
	
	
	while(1){
		int sensor_reading = adc_read(0);
		Seven_segment(&PORTC,sensor_reading);
	}
}