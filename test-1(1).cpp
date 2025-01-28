#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Split Function") {
    std::string text = "one,two,three";
    std::vector<std::string> result = Split(text, ",");

    REQUIRE(result.size() == 3);
    REQUIRE(result[0] == "one");
    REQUIRE(result[1] == "two");
    REQUIRE(result[2] == "three");
}

TEST_CASE("RemoveAllSubstrings Function") {
    std::string text = "hello world world!";
    std::string result = RemoveAllSubstrings(text, "world");

    REQUIRE(result == "hello !");
}

TEST_CASE("RemoveFirstSubstring Function") {
    std::string text = "hello world world!";
    std::string result = RemoveFirstSubstring(text, "world");

    REQUIRE(result == "hello  world!");
}

TEST_CASE("Join Function") {
    std::vector<std::string> pieces = {"one", "two", "three"};
    std::string result = Join(pieces, "-");

    REQUIRE(result == "one-two-three");
}

TEST_CASE("Factorial Function") {
    REQUIRE(Factorial(0) == 1);
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(5) == 120);
}

TEST_CASE("RemoveTwos Function") {
    REQUIRE(RemoveTwos(16) == 1);
    REQUIRE(RemoveTwos(7) == 7);
    REQUIRE(RemoveTwos(52) == 13);
}

TEST_CASE("MatchVectors Function") {
    std::vector<int> a = {1, 2, 3, 4};
    std::vector<int> b = {2, 4};
    std::vector<int> result = MatchVectors(a, b);

    REQUIRE(result.size() == 2);
    REQUIRE(result[0] == 1);
    REQUIRE(result[1] == 3);
}
