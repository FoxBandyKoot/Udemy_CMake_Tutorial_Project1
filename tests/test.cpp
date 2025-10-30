#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_approx.hpp>
#include "../src/lib_kelvin/kelvin.h"
#include "../src/lib_fahrenheit/fahrenheit.h"

TEST_CASE("CelsiusToKelvin") {
    REQUIRE(celsiusToKelvin(0.0) == Catch::Approx(273.15));
    REQUIRE(celsiusToKelvin(100.0) == Catch::Approx(373.15));
    REQUIRE(celsiusToKelvin(-273.15) == Catch::Approx(0.0));
}

TEST_CASE("CelsiusToFahrenheit") {
    REQUIRE(celsiusToFahrenheit(0.0) == Catch::Approx(32.0));
    REQUIRE(celsiusToFahrenheit(100.0) == Catch::Approx(212.0));
    REQUIRE(celsiusToFahrenheit(-273.15) == Catch::Approx(-459.67));
}
