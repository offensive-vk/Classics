#include <iostream>

// Function returning a reference to an integer and modifying it
int& showNum(int& num) {
    std::cout << "Inside showNum function" << std::endl;
    // Modifying the value of the passed integer through the reference
    num *= 2;
    // Returning a reference to the modified integer
    return num;
}

// Function taking a constant reference to an integer and performing calculations
void displayNum(const int& num) {
    std::cout << "Inside displayNum function" << std::endl;
    // Performing some calculations with the constant reference
    int result = num + 10;
    std::cout << "Result of calculations: " << result << std::endl;
}

// Function taking two integers by value and returning their sum
int addNumbers(int a, int b) {
    std::cout << "Inside addNumbers function" << std::endl;
    // Returning the sum of the two integers
    return a + b;
}

int main() {
    int number = 5;

    std::cout << "Original number: " << number << std::endl;

    // Calling the function and getting a reference to the integer
    int& result = showNum(number);

    std::cout << "Modified number: " << result << std::endl;
    std::cout << "Original number after modification: " << number << std::endl;

    // Calling the function with a constant reference to the original number
    displayNum(number);

    // Calling the function to add two numbers
    int sum = addNumbers(10, 20);
    std::cout << "Sum of two numbers: " << sum << std::endl;

    return 0;
}