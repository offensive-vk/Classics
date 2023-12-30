#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

// Use Case 5: Lambda Function with std::function for Generic Operations
template <typename T>
std::function<T(T, T)> performOperation(char op) {
    switch (op) {
        case '+':
            return [](T a, T b) { return a + b; };
        case '-':
            return [](T a, T b) { return a - b; };
        case '*':
            return [](T a, T b) { return a * b; };
        case '/':
            return [](T a, T b) { return (b != 0) ? a / b : throw std::invalid_argument("Division by zero"); };
        default:
            throw std::invalid_argument("Invalid operation");
    }
}

// Use Case 6: Lambda Function for Deferred Execution (Callback)
void performAsyncOperation(std::function<void()> callback) {
    std::cout << "Performing asynchronous operation..." << std::endl;
    // Simulate some asynchronous task
    std::cout << "Asynchronous task completed." << std::endl;

    // Execute the callback function
    callback();
}
int main() {
    // Use Case 5: Lambda Function with std::function for Generic Operations
    auto add = performOperation<int>('+');
    auto multiply = performOperation<double>('*');

    std::cout << "Addition result: " << add(5, 7) << std::endl;
    std::cout << "Multiplication result: " << multiply(3.5, 2.0) << std::endl;

    // Use Case 6: Lambda Function for Deferred Execution (Callback)
    performAsyncOperation([] {
        std::cout << "Callback executed." << std::endl;
    });

    return 0;
}