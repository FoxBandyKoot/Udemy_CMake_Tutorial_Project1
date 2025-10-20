set(LIB_SOURCES kelvin.cpp)
set(LIB_HEADERS kelvin.h)
add_library(${LIB_KELVIN} STATIC ${LIB_SOURCES} ${LIB_HEADERS})
target_link_directories(${LIB_KELVIN} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})