cmake_minimum_required(VERSION 3.28.3)
project(
    TemperatureProject
    VERSION 1.0.0
    DESCRIPTION "A project to convert temperatures between Celsius and Fahrenheit"
    LANGUAGES C CXX
    )

add_library(library STATIC kelvin.cpp)
add_executable(TemperatureConvertor main.cpp)
target_link_libraries(TemperatureConvertor library)