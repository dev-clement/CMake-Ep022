#include <gtest/gtest.h>
#include "calculator.hpp"

class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;
};

TEST_F(CalculatorTest, Add_PositiveNumbers) {
    EXPECT_EQ(calc.add(2, 3), 5);
}

TEST_F(CalculatorTest, Add_NegativeNumbers) {
    EXPECT_EQ(calc.add(-2, -3), -5);
}

TEST_F(CalculatorTest, Sub_PositiveNumbers) {
    EXPECT_EQ(calc.sub(5, 3), 2);
}

TEST_F(CalculatorTest, Sub_NegativeNumbers) {
    EXPECT_EQ(calc.sub(-5, -2), -3);
}

TEST_F(CalculatorTest, Mul_PositiveNumbers) {
    EXPECT_EQ(calc.mul(4, 3), 12);
}

TEST_F(CalculatorTest, Mul_WithZero) {
    EXPECT_EQ(calc.mul(4, 0), 0);
}

TEST_F(CalculatorTest, Div_ExactDivision) {
    EXPECT_EQ(calc.div(10, 2), 5);
}

TEST_F(CalculatorTest, Div_NegativeResult) {
    EXPECT_EQ(calc.div(-10, 2), -5);
}

TEST_F(CalculatorTest, Div_ByZeroThrows) {
    EXPECT_ANY_THROW(calc.div(5, 0));
}

TEST_F(CalculatorTest, Mod_PositiveNumbers) {
    EXPECT_EQ(calc.mod(10, 3), 1);
}

TEST_F(CalculatorTest, Mod_ByZeroThrows) {
    EXPECT_ANY_THROW(calc.mod(10, 0));
}

TEST_F(CalculatorTest, Mod_NegativeDividend) {
    EXPECT_EQ(calc.mod(-10, 3), -1);  // behavior is compiler-dependent, this checks your implementation
}