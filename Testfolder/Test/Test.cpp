#include"gtest/gtest.h"
#include"lib/addition/Add.h"
#include"lib/Division/Div.h"
#include"lib/Multipication/Mul.h"
#include"lib/Subraction/Sub.h"

// float Add(float a, float b)
// {
//     return a+b;
// }

// float multi(float a, float b)
// {
//     return a+b;
// }

// float divi(float a, float b)
// {
//     return a+b;
// }
// float sub(float a, float b)
// {
//     return a+b;
// }
TEST(CalculatorTest, Add) {
    EXPECT_EQ(Add(2, 3), 5);
}

TEST(CalculatorTest, Subtract) {
    EXPECT_EQ(sub(5, 3), 2);
}

TEST(CalculatorTest, Multiply) {
    EXPECT_EQ(multi(2, 3), 6);
}

TEST(CalculatorTest, Divide) {
    EXPECT_EQ(divi(6, 3), 2);
    // EXPECT_EQ(calc.divide(5, 0), 0); // Test division by zero
}

