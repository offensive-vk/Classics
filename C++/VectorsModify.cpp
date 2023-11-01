#include <iostream>
#include <vector>

int main() {
    // Create an empty vector of integers
    std::vector<int> numbers;

    // Modifier methods
    // Adding elements to the vector
    numbers.push_back(10);  // Add 10 to the end
    numbers.push_back(20);  // Add 20 to the end
    numbers.insert(numbers.begin() + 1, 15); // Insert 15 at the second position

    // Display the elements
    std::cout << "Vector elements after push_back and insert: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Removing elements from the vector
    numbers.pop_back();  // Remove the last element
    numbers.erase(numbers.begin() + 1); // Remove the second element

    // Display the elements after removal
    std::cout << "Vector elements after pop_back and erase: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Clear the vector
    numbers.clear();

    // Check if the vector is empty
    if (numbers.empty()) {
        std::cout << "Vector is empty after clear()." << std::endl;
    }

    return 0;
}
