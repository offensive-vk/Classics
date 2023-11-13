#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Use a lambda expression and std::accumulate to find the sum of even numbers
    auto sumOfEvens = std::accumulate(numbers.begin(), numbers.end(), 0,
        [](int accumulator, int current) {
            return (current % 2 == 0) ? accumulator + current : accumulator;
        });

    // Display the original vector
    std::cout << "Original numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Display the sum of even numbers
    std::cout << "Sum of even numbers: " << sumOfEvens << std::endl;

    return 0;
}
