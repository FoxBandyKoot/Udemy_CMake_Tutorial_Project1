#include "kelvin.h"

int main(void)
{
    
    float celsius = 25.0f;
    float kelvin = celsiusToKelvin(celsius);
    printTemperature(kelvin, celsius);
    return 0;   
}