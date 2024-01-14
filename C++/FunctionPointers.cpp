#include <iostream>

// Function using a pointer to an integer and modifying the value
int* showNum(int* numPtr) {
    std::cout << "Inside showNum function" << std::endl;
    // Modifying the value pointed to by the pointer
    (*numPtr) *= 2;
    // Returning the pointer to the modified value
    return numPtr;
}

// Function taking a constant pointer to an integer and performing calculations
void displayNum(const int* numPtr) {
    std::cout << "Inside displayNum function" << std::endl;
    // Performing some calculations with the constant pointer
    int result = (*numPtr) + 10;
    std::cout << "Result of calculations: " << result << std::endl;
}

// Function taking two pointers to integers, performing an operation, and returning the result
int operateNumbers(const int* num1Ptr, const int* num2Ptr) {
    std::cout << "Inside operateNumbers function" << std::endl;
    // Performing an operation with the values pointed to by the pointers
    return (*num1Ptr) * (*num2Ptr);
}
