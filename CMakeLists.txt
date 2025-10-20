cmake_minimum_required(VERSION 3.28.3)
project(
    TemperatureProject
    VERSION 0.1.0
    DESCRIPTION "A project to convert temperatures between Celsius and Fahrenheit"
    LANGUAGES C CXX
    )

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 17)
set(EXEC_NAME "TemperatureConvertor")
set(LIB_KELVIN "Lib_Kelvin")
set(LIB_FAHRENHEIT "Lib_Fahrenheit")

# Option to compile the application
option(COMPILE_APP "Compile the application" ON)
if(COMPILE_APP)
    add_subdirectory(app)
endif()

# Add folders
add_subdirectory(configure)
add_subdirectory(src)