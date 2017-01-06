#include "some_lib.hpp"

#include <string>
#include <iostream>

int main() {
  std::string line;
  while (std::getline(std::cin, line)) {
    std::cout << Reverse(line) << std::endl;
  }
}
