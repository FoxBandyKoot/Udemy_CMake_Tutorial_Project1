set(TEST_PRINCIPAL "unit_tests")
set(TEST_SOURCES "test.cpp")

add_executable(${TEST_PRINCIPAL} ${TEST_SOURCES})
target_include_directories(${TEST_PRINCIPAL} PUBLIC ./) # ${CMAKE_CURRENT_LIST_DIR}
target_link_libraries(${TEST_PRINCIPAL} PUBLIC Catch2::Catch2WithMain ${LIB_KELVIN} ${LIB_FAHRENHEIT})

add_test(NAME ${TEST_PRINCIPAL} COMMAND ${TEST_PRINCIPAL})
include(Catch)
catch_discover_tests(${TEST_PRINCIPAL})