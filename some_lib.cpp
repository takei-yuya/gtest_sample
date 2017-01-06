#include "some_lib.hpp"

std::string Reverse(const std::string& str) {
  std::string result;
  result.reserve(str.size());
  for (std::string::const_reverse_iterator it = str.rbegin(); it != str.rend(); ++it) {
    result += *it;
  }
  return result;
}
