#include <iostream>
#include"Calculator.h"


int main() {
    Calculator C;
    std::cout << "Enter your option:\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    

    int option;
    std::cin >> option;

    float num1, num2, result;
    switch(option) {
        case 1:
            std::cout << "Enter two numbers to add:\n";
            std::cin >> num1 >> num2;
            result = C.add(num1, num2);
            std::cout << "Result: " << result << std::endl;
            break;
        case 2:
            std::cout << "Enter two numbers to subtract:\n";
            std::cin >> num1 >> num2;
            result = C.subtract(num1, num2);
            std::cout << "Result: " << result << std::endl;
            break;
        case 3:
            std::cout << "Enter two numbers to multiply:\n";
            std::cin >> num1 >> num2;
            result = C.multiply(num1, num2);
            std::cout << "Result: " << result << std::endl;
            break;
        case 4:
            std::cout << "Enter two numbers to divide:\n";
            std::cin >> num1 >> num2;
            if (num2 != 0) {
                result = C.divide(num1, num2);
                std::cout << "Result: " << result << std::endl;
            } else {
                std::cout << "Error: Cannot divide by zero!\n";
            }
            break;
        default:
            std::cout << "Invalid option!\n";
            break;
    }
    std::cout<<C.CalculatorAll(2,4,'+')<<std::endl;
    std::cout<<C.CalculatorAll(2,4,'-')<<std::endl;
    std::cout<<C.CalculatorAll(2,4,'*')<<std::endl;
    std::cout<<C.CalculatorAll(2,4,'/')<<std::endl;

    return 0;
}