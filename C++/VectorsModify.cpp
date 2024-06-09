#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Create a vector of integers
    std::vector<int> vec;

    // 1. Adding elements to the vector using push_back
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    std::cout << "Vector after adding elements: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // 2. Modifying elements in the vector
    vec[1] = 25; // Change the second element from 20 to 25
    std::cout << "Vector after modifying the second element: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // 3. Removing elements from the vector using erase
    vec.erase(vec.begin() + 1); // Remove the second element
    std::cout << "Vector after removing the second element: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // 4. Inserting elements at a specific position using insert
    vec.insert(vec.begin() + 1, 20); // Insert 20 at the second position
    std::cout << "Vector after inserting 20 at the second position: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // 5. Clearing the vector using clear
    vec.clear();
    std::cout << "Vector after clearing all elements: ";
    if (vec.empty()) {
        std::cout << "Vector is empty" << std::endl;
    } else {
        for (const auto& elem : vec) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
