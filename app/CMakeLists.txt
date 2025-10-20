add_executable(${EXEC_NAME} main.cpp)
target_link_libraries(${EXEC_NAME} ${LIB_KELVIN} ${LIB_FAHRENHEIT})
target_include_directories(${EXEC_NAME} PUBLIC ${CMAKE_BINARY_DIR}/configure_files/include)