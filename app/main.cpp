#include "../src/lib_kelvin/kelvin.h"
#include "../src/lib_fahrenheit/fahrenheit.h"
#include "version.hpp"
#include <fstream>
#include <nlohmann/json.hpp>
#include <fmt/format.h>
using json = nlohmann::json;

void test_fmt_lib()
{
    fmt::print("Testing fmt library\n");
}

void test_nlohmann_json_lib()
{
        json j2 = {
        {"pi", 3.141},
        {"happy", true},
        {"name", "Niels"},
        {"nothing", nullptr},
        {"answer", {
            {"everything", 42}
        }},
        {"list", {1, 0, 2}},
        {"object", {
            {"currency", "USD"},
            {"value", 42.99}
        }}
    };
    std::ofstream o("example.json");
    o << std::setw(4) << j2 << std::endl;
}

int main(void)
{
    // Test CMAKE/C++ global variables
    std::cout << "Temperature Converter Application - Name Project "<< cProjectName << std::endl;
    std::cout << "Temperature Converter Application - Version: " << cProjectVersion << std::endl;

    float celsius = 35.0f;
    float kelvin = celsiusToKelvin(celsius);
    printKelvinToCelsius(kelvin, celsius);

    float fahrenheit = kelvinToFahrenheit(kelvin);
    printFahrenheitTemperature(kelvin, fahrenheit);

    test_nlohmann_json_lib();
    test_fmt_lib();
    
    return 0;   
}