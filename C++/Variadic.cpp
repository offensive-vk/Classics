#include <iostream>

// Base case for the recursive variadic print function
void print() {
    std::cout << std::endl;
}

// Recursive variadic print function to print all arguments
template <typename T, typename... Args>
void print(T first, Args... args) {
    std::cout << first << ' ';
    print(args...);  // Recursively call print for the remaining arguments
}

// Variadic function to calculate the sum of a list of numbers
template <typename T>
T sum(T value) {
    return value;
}

template <typename T, typename... Rest>
T sum(T first, Rest... rest) {
    return first + sum(rest...);  // Recursively add the numbers
}

int main() {
    // Print a list of values
    print("Hello,", 42, "world!", 3.14, "Variadic Templates");

    // Calculate the sum of a list of numbers
    int sumOfInts = sum(1, 2, 3, 4, 5);
    double sumOfDoubles = sum(2.5, 1.5, 3.0, 4.5);

    std::cout << "Sum of Integers: " << sumOfInts << std::endl;
    std::cout << "Sum of Doubles: " << sumOfDoubles << std::endl;

    return 0;
}
