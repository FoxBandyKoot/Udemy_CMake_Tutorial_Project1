add_library(${LIB_FAHRENHEIT} STATIC fahrenheit.cpp)
target_link_directories(${LIB_FAHRENHEIT} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})