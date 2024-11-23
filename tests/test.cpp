#include "gtest/gtest.h"
#include "../src/math_utils.hpp"

// Test for add function
TEST(AdditionTest, HandlesPositiveNumbers) {
    EXPECT_EQ(add(3, 5), 8);
    EXPECT_EQ(add(10, 20), 30);
}

TEST(AdditionTest, HandlesNegativeNumbers) {
    EXPECT_EQ(add(-3, -5), -8);
    EXPECT_EQ(add(-10, 20), 10);
}

// Test for subtract function
TEST(SubtractionTest, HandlesPositiveNumbers) {
    EXPECT_EQ(subtract(10, 5), 5);
    EXPECT_EQ(subtract(20, 30), -10);
}

TEST(SubtractionTest, HandlesNegativeNumbers) {
    EXPECT_EQ(subtract(-10, -5), -5);
    EXPECT_EQ(subtract(-20, 10), -30);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
