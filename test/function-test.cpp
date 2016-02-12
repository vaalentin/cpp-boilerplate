#include "gtest/gtest.h"
#include "../src/core.h"

int val = add(1, 2);

TEST(function, should_pass) {
  EXPECT_EQ(3, val);
}
