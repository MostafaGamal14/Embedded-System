
#include "Pressure_Sensor.h"

int pVal ;

int read_Psensor(){

    pVal=getPressureVal();

    waiting();

    return pVal ;
}

void waiting(){

    Delay(10);
}


