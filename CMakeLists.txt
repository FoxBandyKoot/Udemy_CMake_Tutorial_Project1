cmake_minimum_required(VERSION 3.28.3)
project(
    TemperatureProject
    VERSION 0.1.0
    DESCRIPTION "A project to convert temperatures between Celsius and Fahrenheit"
    LANGUAGES C CXX
    )

# FetchContent to get external libraries || https://www.udemy.com/course/cmake-clarifie-maitrisez-vos-projets-cc/learn/lecture/48149715#
include(FetchContent)
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG 12.0.0
    GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(fmt)

# CONAN
# instllation : pipx install conan
# configuration (at build project folder): conan install .. -s build_type=Debug -s compiler.cppstd=17 --output-folder=. --build missing
include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)
find_package(Catch2)
    
# SETTINGS
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 17)
set(EXEC_NAME "TemperatureConvertor")

set(INSTALL_PATH "${CMAKE_CURRENT_SOURCE_DIR}/install" CACHE PATH "Installation Path")

set(LIB_KELVIN "Lib_Kelvin")
set(LIB_FAHRENHEIT "Lib_Fahrenheit")

#inclusion doxygen documentation

set(CMAKE_BUILD_TYPE Debug)
# DEBUG
option(ENABLE_DEBUG "Activate debug mode" OFF)
if(ENABLE_DEBUG)
    message(STATUS "FoxBandyKoot Message - Debug mode is enabled")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g") # Add debug symbols
else()
    message(STATUS "FoxBandyKoot Message - Debug mode is disabled")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2") # Optimize for release
endif()


# WARNINGS
option(ENABLE_WARNINGS "Enable all compiler warnings" ON)
if(ENABLE_WARNINGS)
    message("Settings Warnings")

    if(CMAKE_CXX_COMPILER_ID MATCHES MSVC)
        message("FoxBandyKoot Message - MSVC -Compiler")
        set(WARNING_MSVC /W4 /Wall /permissive)
    elseif(CMAKE_CXX_COMPILER_ID MATCHES GNU)
        message("FoxBandyKoot Message - GCC - Compiler")
        set(WARNING_GCC_COMPILER ${WARNING_GCC})
    endif()

endif()

# COMPILE
option(COMPILE_APP "Compile the application" ON)
if(COMPILE_APP)
    add_subdirectory(app)
endif()

add_subdirectory(configure)
add_subdirectory(src)

# Modules
add_subdirectory(nlohmann_json)


# CMAKE_PROJECT_NAME => Name of the principale project
# PROJECT_NAME => Name of the current project
option(LIB_CTest "Compile the CTest library" ON)
if((CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME) AND (LIB_CTest))
    message("FoxBandyKoot MESSAGE - Adding CTest")
    include(CTest)
    enable_testing()
    add_subdirectory(tests)
endif()

include(cmake/Documentation.cmake)
