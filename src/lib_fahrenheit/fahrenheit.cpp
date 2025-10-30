#include "fahrenheit.h"

float kelvinToFahrenheit(float kelvin)
{
    return (kelvin * cCoeff) - cDegree;
}

float celsiusToFahrenheit(float celsius)
{
    return celsius * 1.8 + 32;
}

void printFahrenheitTemperature(const float kelvin, const float fahrenheit)
{
    std::cout << kelvin << " K is " << fahrenheit << " °F" << std::endl;
}