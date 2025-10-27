cmake_minimum_required(VERSION 3.28.3)
project(
    TemperatureProject
    VERSION 0.1.0
    DESCRIPTION "A project to convert temperatures between Celsius and Fahrenheit"
    LANGUAGES C CXX
    )


# SETTINGS
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 17)
set(EXEC_NAME "TemperatureConvertor")
set(LIB_KELVIN "Lib_Kelvin")
set(LIB_FAHRENHEIT "Lib_Fahrenheit")

# DEBUG
option(ENABLE_DEBUG "Activate debug mode" OFF)
if(ENABLE_DEBUG)
    message(STATUS "Debug mode is enabled")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g") # Add debug symbols
else()
    message(STATUS "Debug mode is desabled")    
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2") # Optimize for release
endif()

# COMPILE
option(COMPILE_APP "Compile the application" ON)

# Add folders
if(COMPILE_APP)
    add_subdirectory(app)
endif()

add_subdirectory(configure)
add_subdirectory(src)

# Modules
add_subdirectory(nlohmann_json)
