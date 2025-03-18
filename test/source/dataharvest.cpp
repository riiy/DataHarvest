#include <dataharvest/dataharvest.h>
#include <dataharvest/version.h>
#include <doctest/doctest.h>

#include <string>

TEST_CASE("DataHarvest") {
  using namespace dataharvest;

  DataHarvest dataharvest("Tests");

  CHECK(dataharvest.greet(LanguageCode::EN) == "Hello, Tests!");
  CHECK(dataharvest.greet(LanguageCode::DE) == "Hallo Tests!");
  CHECK(dataharvest.greet(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(dataharvest.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("DataHarvest version") {
  static_assert(std::string_view(DATAHARVEST_VERSION) == std::string_view("1.0"));
  CHECK(std::string(DATAHARVEST_VERSION) == std::string("1.0"));
}
