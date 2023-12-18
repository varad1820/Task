#include"gtest/gtest.h"
#include"lib/addition/Add.h"
#include"lib/Division/Div.h"
#include"lib/Multipication/Mul.h"
#include"lib/Subraction/Sub.h"
#include"Calculator.h"

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


TEST(NewFunction , AddNum){
    Calculator C;
    EXPECT_EQ(C.CalculatorAll(2,4,'+'),6);
}

TEST(NewFunction , SubNum){
    Calculator C;
    EXPECT_EQ(C.CalculatorAll(2,4,'-'),-2);
}
TEST(NewFunction , MulNum){
    Calculator C;
    EXPECT_EQ(C.CalculatorAll(2,4,'*'),8);
}
TEST(NewFunction , DivNum){
    Calculator C;
    EXPECT_EQ(C.CalculatorAll(2,4,'/'),0.5);
}