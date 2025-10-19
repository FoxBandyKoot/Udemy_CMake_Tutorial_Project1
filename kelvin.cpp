#include "kelvin.h"
#include <iostream>

float kelvinToCelsius(float kelvin)
{
    return kelvin - zeroDegree;
}

float celsiusToKelvin(float celsius)
{
    return celsius + zeroDegree;
}

void printTemperature(const float kelvin, const float celsius)
{
    std::cout << kelvin << " K is " << celsius << " °C" << std::endl;
}