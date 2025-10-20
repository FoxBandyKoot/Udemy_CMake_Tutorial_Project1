#include "../src/lib_kelvin/kelvin.h"
#include "../src/lib_fahrenheit/fahrenheit.h"

int main(void)
{
    
    float celsius = 25.0f;
    float kelvin = celsiusToKelvin(celsius);
    printKelvinToCelsius(kelvin, celsius);

    float fahrenheit = kelvinToFahrenheit(kelvin);
    printFahrenheitTemperature(kelvin, fahrenheit);


    return 0;   
}