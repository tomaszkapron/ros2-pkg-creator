#include "gtest/gtest.h"
#include "hello_world/hello_world.hpp"

TEST(TestHelloWorld, TestHello) {
  EXPECT_EQ(autoware::hello_world::print_hello(), 0);
}
