#include <avr/io.h>
#include <util/delay.h>
#include <lcd.h>
#include <ADC.h>
int main()
{
     LCDInit(0);
     LCDClear();
	 
	while(1){
			
			//LCDWriteString("Temp:");
			int sensor_reading = adc_read(0);   //reading analog data
			int r = (5*sensor_reading)/10.23;  //Convert data
            LCDWriteInt(r,4);                 //write Data On LCD
	        //LCDWriteString(" C");
			_delay_ms(100);
			LCDClear();
		}

    

}
