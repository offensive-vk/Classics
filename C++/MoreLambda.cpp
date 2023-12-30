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

