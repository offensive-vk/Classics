#include <iostream>
#include <cassert>

// Function to calculate the factorial of a number
int factorial(int n) {
    // Assert that the input is non-negative
    assert(n >= 0);

    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    // Assert that the input is a non-negative integer
    assert(number >= 0);

    int result = factorial(number);

    std::cout << "Factorial of " << number << " is " << result << std::endl;

    // Example of a failed assertion
    // This assertion will fail if uncommented because -1 is not a valid input for factorial
    // assert(factorial(-1) >= 0);

    return 0;
}