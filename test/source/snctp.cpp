#include <doctest/doctest.h>
#include <snctp/snctp.h>
#include <snctp/version.h>

#include <string>

TEST_CASE("SNCTP") {
  using namespace snctp;

  SNCTP snctp("Tests");

  CHECK(snctp.greet(LanguageCode::EN) == "Hello, Tests!");
  CHECK(snctp.greet(LanguageCode::DE) == "Hallo Tests!");
  CHECK(snctp.greet(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(snctp.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("SNCTP version") {
  static_assert(std::string_view(SNCTP_VERSION) == std::string_view("1.0"));
  CHECK(std::string(SNCTP_VERSION) == std::string("1.0"));
}
