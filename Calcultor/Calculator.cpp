#include "Calculator.h"
#include"lib/addition/Add.h"
#include"lib/Division/Div.h"
#include"lib/Multipication/Mul.h"
#include"lib/Subraction/Sub.h"


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
