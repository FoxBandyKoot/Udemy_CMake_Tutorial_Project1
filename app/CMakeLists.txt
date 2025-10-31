add_executable(${EXEC_NAME} main.cpp)
target_link_libraries(${EXEC_NAME} PUBLIC
    ${LIB_KELVIN} 
    ${LIB_FAHRENHEIT}
    fmt::fmt
    nlohmann_json::nlohmann_json)

target_include_directories(${EXEC_NAME} PUBLIC ${CMAKE_BINARY_DIR}/configure_files/include)

install(TARGETS ${EXEC_NAME} DESTINATION ${INSTALL_PATH}/bin)

# Ensure the installed executable can find the shared libraries placed in
# ${INSTALL_PATH}/lib at runtime. Use a relative RPATH pointing to the
# `lib` directory next to the executable. We escape $ORIGIN so CMake sets
# the literal $ORIGIN in the generated binary's RUNPATH.
set_target_properties(${EXEC_NAME} PROPERTIES
    INSTALL_RPATH "\$ORIGIN/../lib"
    BUILD_RPATH "\$ORIGIN/../lib"
)