#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    // Example 1: Simple lambda function
    auto greet = []() {
        std::cout << "Hello, Lambda!\n";
    };

    greet(); // Call the lambda function

    // Example 2: Lambda function with parameters
    auto add = [](int a, int b) {
        return a + b;
    };

    int result = add(5, 7);
    std::cout << "Result of addition: " << result << "\n";

    // Example 3: Lambda function as a parameter to standard algorithms
    std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    
    // Use lambda function to print each element in the vector
    std::for_each(numbers.begin(), numbers.end(), [](int num) {
        std::cout << num << " ";
    });
    std::cout << "\n";

    // Example 4: Capture variables from the surrounding scope
    int multiplier = 2;
    auto multiply = [multiplier](int x) {
        return x * multiplier;
    };

    std::cout << "Result of multiplication: " << multiply(10) << "\n";

    return 0;
}
