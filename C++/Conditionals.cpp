#include <iostream>

int main() {
    int number = 10;

    // if statement
    if (number > 0) {
        std::cout << "Number is positive." << std::endl;
    }

    // if-else statement
    if (number % 2 == 0) {
        std::cout << "Number is even." << std::endl;
    } else {
        std::cout << "Number is odd." << std::endl;
    }

    // else if statement
    if (number < 0) {
        std::cout << "Number is negative." << std::endl;
    } else if (number == 0) {
        std::cout << "Number is zero." << std::endl;
    } else {
        std::cout << "Number is positive." << std::endl;
    }

    return 0;
}
