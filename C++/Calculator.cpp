#include <iostream>
#include <conio.h>

int main() {
    double num1, num2;
    char operation, redo;
    do {
        std::cout << "Enter the first number: ";
        std::cin >> num1;
        std::cout << "Enter the operation (+,-,*,/): ";
        std::cin >> operation;
        std::cout << "Enter the second number: ";
        std::cin >> num2;

        switch(operation) {
            case '+':
                std::cout << "The addition of two numbers: " << num1+num2 << "\n";
                break;
            case '-':
                std::cout << "The subtraction of two numbers: " << num1-num2 << "\n";
                break;
            case '*':
                std::cout << "The multiplication of two numbers: " << num1*num2 << "\n";
                break;
            case '/':
                std::cout << "The division of two numbers: " << num1/num2 << "\n";
                break;
            default:
                std::cout << "Invalid operation!\n";
        }

        std::cout << "Do you want to do another operation? (Y/N): ";
        std::cin >> redo;
        std::cout << "\n\n";
    } while (redo == 'y' || redo == 'Y');

    return 0;
}
