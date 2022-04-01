#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "encryptCaesar(\"Hello, World!\", 10) returns: " << encryptCaesar("Hello, World!", 10) << std::endl;
  std::cout << "encryptCaesar(\"123 Happy Spring!\", 2) returns: " << encryptCaesar("123 Happy Spring!", 2) << std::endl << std::endl;
  
  std::cout << "solve(\"The great brown fox jumped over the the lazy dog\") returns: \n";
  std::cout << solve("The great brown fox jumped over the the lazy dog") << std::endl << std::endl;

  std::cout << "solve(encryptCaesar(\"The rotation with the smallest distance should be the solution. You can add additional functions and place all functionality in files that make sense (and/or add new ones). You should use doctest based tests to show that this works.\", 10)) returns: \n";
  std::cout << solve(encryptCaesar("The rotation with the smallest distance should be the solution. You can add additional functions and place all functionality in files that make sense (and/or add new ones). You should use doctest based tests to show that this works.", 10)) << std::endl;
  
  return 0;
}