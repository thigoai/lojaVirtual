#include "../src/main.cpp"
#include <gtest/gtest.h>

// Teste simples
TEST(AdditionTest, HandlesPositiveNumbers) { EXPECT_EQ(add(2, 3), 5); }

TEST(AdditionTest, HandlesNegativeNumbers) { EXPECT_EQ(add(-2, -3), -5); }
