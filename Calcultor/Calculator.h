#ifndef CALCULATOR_H
#define CALCULATOR_H



class Calculator
{
public:
    Calculator()=default;
    float add(float x,float y);
    float subtract(float x,float y);
    float multiply(float x,float y);
    float divide(float x,float y);

    ~Calculator() {}
};


#endif // CALCULATOR_H
