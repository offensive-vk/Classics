#include <iostream>
#include <vector>

int main() {
    // Creating an empty vector of integers
    std::vector<int> numbers;

    // Adding elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Accessing elements using index
    std::cout << "Elements of the vector: ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Using range-based for loop to access elements
    std::cout << "Elements of the vector using range-based for loop: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Removing elements from the vector
    numbers.pop_back(); // Removes the last element

    // Display the updated vector
    std::cout << "Vector after removing an element: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if the vector is empty
    if (numbers.empty()) {
        std::cout << "Vector is empty." << std::endl;
    } else {
        std::cout << "Vector is not empty." << std::endl;
    }

    // Clear the vector
    numbers.clear();

    // Check if the vector is empty again
    if (numbers.empty()) {
        std::cout << "Vector is empty after clearing." << std::endl;
    }

    return 0;
}
