#include "../src/lib_kelvin/kelvin.h"
#include "../src/lib_fahrenheit/fahrenheit.h"
#include "version.hpp"

int main(void)
{
    std::cout << "Temperature Converter Application - Name Project "<< cProjectName << std::endl;
    std::cout << "Temperature Converter Application - Version: " << cProjectVersion << std::endl;

    float celsius = 35.0f;
    float kelvin = celsiusToKelvin(celsius);
    printKelvinToCelsius(kelvin, celsius);

    float fahrenheit = kelvinToFahrenheit(kelvin);
    printFahrenheitTemperature(kelvin, fahrenheit);


    return 0;   
}