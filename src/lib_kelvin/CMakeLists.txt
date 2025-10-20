add_library(${LIB_KELVIN} STATIC kelvin.cpp)
target_link_directories(${LIB_KELVIN} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})