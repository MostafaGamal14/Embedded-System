#include <stdint.h>
#include <stdio.h>

#include "driver.h"
#include "Pressure_Sensor.h"
#include "Alarm_Monitor.h"
#include "Alarm_Actuator.h"



int main (){
    GPIO_INITIALIZATION();
    int pVal;
    int threshold = 20 ;
	void High_Pressure_Detection(){
	if (pVal>=threshold){
        alarmON();
	    Delay(60); //Duration of alarm 
	    alarmOFF();
	}
	else {
          alarmOFF();
		  Delay(60);
        pVal=read_Psensor();
	}
	}
   


	while (1)
	{
	pVal=read_Psensor();
	High_Pressure_Detection();

	}

}

 