set(LIB_SOURCES fahrenheit.cpp)
set(LIB_HEADERS fahrenheit.h)
add_library(${LIB_FAHRENHEIT} STATIC ${LIB_SOURCES} ${LIB_HEADERS})
target_link_directories(${LIB_FAHRENHEIT} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})