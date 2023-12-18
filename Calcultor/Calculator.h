#ifndef CALCULATOR_H
#define CALCULATOR_H
#include<iostream>
#include <stdexcept>



class Calculator
{
public:
    Calculator()=default;
    float add(float x,float y);
    float subtract(float x,float y);
    float multiply(float x,float y);
    float divide(float x,float y);
    bool boolean(float a,float b);
    
    float CalculatorAll( float x,float y,char operation);


    

    ~Calculator() {}
};


#endif // CALCULATOR_H
