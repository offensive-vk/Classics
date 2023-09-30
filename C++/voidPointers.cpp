#include <iostream>
#include <cstdlib>
int main() {
    int intValue = 42;
    double doubleValue = 3.14159;
    char charValue = 'A';

    // Declaring void pointers
    void* voidPtr1;
    void* voidPtr2;
    void* voidPtr3;

    // Assigning addresses of variables to void pointers
    voidPtr1 = &intValue;
    voidPtr2 = &doubleValue;
    voidPtr3 = &charValue;

    // Dereferencing and type casting void pointers
    int* intPtr = static_cast<int*>(voidPtr1);
    double* doublePtr = static_cast<double*>(voidPtr2);
    char* charPtr = static_cast<char*>(voidPtr3);

    // Printing values
    std::cout << "Value of intValue: " << *intPtr << std::endl;
    std::cout << "Value of doubleValue: " << *doublePtr << std::endl;
    std::cout << "Value of charValue: " << *charPtr << std::endl;

    return 0;
}
