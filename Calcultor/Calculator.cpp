#include "Calculator.h"
#include"lib/addition/Add.h"
#include"lib/Division/Div.h"
#include"lib/Multipication/Mul.h"
#include"lib/Subraction/Sub.h"
#include"lib/Bool/Boolean.h"



float Calculator::add(float x,float y)
{   
    return Add(x,y);
}

float Calculator::subtract(float x,float y)
{
    return sub(x,y);
}

float Calculator::multiply(float x,float y)
{
    return multi(x,y);
}

float Calculator::divide(float x,float y)
{
    return divi(x,y);
}

bool Calculator::boolean(float a, float b)
{
    return BoolCheck(a,b);
}

float Calculator::CalculatorAll(float x, float y, char operation )
{
    switch (operation)
    {
    case '+':
        return Add(x,y);
    case '-':
        return sub(x,y) ;
    case '*':
        return multi(x,y);
    case '/':
        return divi(x,y);
    default:
        throw std::invalid_argument("Invalid operation");
    }
}
