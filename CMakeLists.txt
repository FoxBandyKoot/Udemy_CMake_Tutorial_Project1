cmake_minimum_required(VERSION 3.28.3)
project(
    TemperatureProject
    VERSION 1.0.0
    DESCRIPTION "A project to convert temperatures between Celsius and Fahrenheit"
    LANGUAGES C CXX
    )

set(EXEC_NAME "TemperatureConvertor")
set(LIB_KELVIN "Lib_Kelvin")
set(LIB_FAHRENHEIT "Lib_Fahrenheit")

add_subdirectory(app)
add_subdirectory(src)