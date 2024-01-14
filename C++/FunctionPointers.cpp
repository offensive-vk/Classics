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
int main() {
    int number = 5;

    std::cout << "Original number: " << number << std::endl;

    // Calling the function with a pointer to the original number
    int* resultPtr = showNum(&number);

    std::cout << "Modified number: " << (*resultPtr) << std::endl;
    std::cout << "Original number after modification: " << number << std::endl;

    // Calling the function with a constant pointer to the original number
    displayNum(&number);

    // Creating two variables and their pointers to demonstrate operateNumbers function
    int a = 3, b = 4;
    int* aPtr = &a;
    int* bPtr = &b;

    // Calling the function to operate on two numbers using pointers
    int operationResult = operateNumbers(aPtr, bPtr);
    std::cout << "Result of operation: " << operationResult << std::endl;

    return 0;
}