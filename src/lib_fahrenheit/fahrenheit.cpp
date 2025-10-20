#include "fahrenheit.h"

float kelvinToFahrenheit(float kelvin)
{
    return (kelvin * cCoeff) - cDegree;
}

void printFahrenheitTemperature(const float kelvin, const float fahrenheit)
{
    std::cout << kelvin << " K is " << fahrenheit << " °F" << std::endl;
}