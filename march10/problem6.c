#include<stdio.h>

union HeatChamber {
    float temperature;
    float pressure;
};


int main(){

union HeatChamber chamber;

chamber.temperature = 75.6;
printf("Temperature: %.2f °C\n", chamber.temperature);

chamber.pressure = 101.3;  // Overwrites temperature
printf("Pressure: %.2f kPa\n", chamber.pressure);

return 0;
}
