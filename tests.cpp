#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Test for encryptCaesar:" ) 
{ 
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
    CHECK(encryptCaesar("123 Happy Spring!", 2) == "123 Jcrra Urtkpi!");
}

TEST_CASE("Test for solve solution: ") 
{ 
    CHECK(solve("The great brown fox jumped over the the lazy dog") == "The great brown fox jumped over the the lazy dog");
    CHECK(solve(encryptCaesar("The rotation with the smallest distance should be the solution. You can add additional functions and place all functionality in files that make sense (and/or add new ones). You should use doctest based tests to show that this works.", 10)) == "The rotation with the smallest distance should be the solution. You can add additional functions and place all functionality in files that make sense (and/or add new ones). You should use doctest based tests to show that this works.");
}