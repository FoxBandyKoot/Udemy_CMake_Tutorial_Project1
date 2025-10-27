add_executable(${EXEC_NAME} main.cpp)
target_link_libraries(${EXEC_NAME} PUBLIC ${LIB_KELVIN} ${LIB_FAHRENHEIT})
target_link_libraries(${EXEC_NAME} PRIVATE nlohmann_json::nlohmann_json)
target_include_directories(${EXEC_NAME} PUBLIC ${CMAKE_BINARY_DIR}/configure_files/include)
