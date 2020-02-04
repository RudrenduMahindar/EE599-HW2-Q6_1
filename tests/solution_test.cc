#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(PalinTest, HandlesTrueLetterString) {
  Solution solution;
  string s="racecar";
  bool actual=solution.StringPalinCheck(s);
  bool expected=true;
  EXPECT_EQ(expected, actual);
}

TEST(PalinTest, HandlesFalseLetterString) {
  Solution solution;
  string s="raceca";
  bool actual=solution.StringPalinCheck(s);
  bool expected=false;
  EXPECT_EQ(expected, actual);
}

TEST(PalinTest, HandlesTrueNumberString) {
  Solution solution;
  string s="999";
  bool actual=solution.StringPalinCheck(s);
  bool expected=true;
  EXPECT_EQ(expected, actual);
}

TEST(PalinTest, HandlesFalseNumberString) {
  Solution solution;
  string s="995";
  bool actual=solution.StringPalinCheck(s);
  bool expected=false;
  EXPECT_EQ(expected, actual);
}
