#include <iostream>
// A simple function template that prints its argument to the console
template<typename T>
void print(T value) {
    std::cout << value << std::endl;
}

// Define the template function
template<typename T>
void myFunction(T value) {
    std::cout << "My value is: " << value << std::endl;
}

int main() {
    // Call the print function with different types of arguments
    print("Hello, world!");
    print(42);
    print(3.14);

    // Call the myFunction template function with different types of arguments
    myFunction("Hello, world!");
    myFunction(42);
    myFunction(3.14);

    return 0;
}