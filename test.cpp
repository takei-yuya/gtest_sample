#include <gtest/gtest.h>

#include "some_lib.hpp"

TEST(Reverse, empty_string) {
  EXPECT_EQ("", Reverse(""));
}

TEST(Reverse, simple) {
  EXPECT_EQ("olleH", Reverse("Hello"));
}

TEST(Reverse, reverse_reverse) {
  EXPECT_EQ("Hello", Reverse(Reverse("Hello")));
}

TEST(Reverse, palindrome) {
  std::string palindrome("SOS");
  EXPECT_EQ(palindrome, Reverse(palindrome));
}
