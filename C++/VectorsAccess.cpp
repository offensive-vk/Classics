#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    // Element access methods
    std::cout << "Vector elements: ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        // Using operator[] to access elements
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Accessing the first element
    std::cout << "First element: " << numbers.front() << std::endl;

    // Accessing the last element
    std::cout << "Last element: " << numbers.back() << std::endl;

    // Accessing elements with iterators
    std::cout << "Using iterators: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Accessing elements with reverse iterators
    std::cout << "Using reverse iterators: ";
    for (auto rit = numbers.rbegin(); rit != numbers.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    return 0;
}
