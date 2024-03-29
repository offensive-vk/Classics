#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[]) {
    // Define a vector of integers
    std::vector<int> numbers = {5, 2, 9, 4, 7, 1, 8, 3, 6};

    // Print the original vector
    std::cout << "Original vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort the vector
    std::sort(numbers.begin(), numbers.end());

    // Print the sorted vector
    std::cout << "Sorted vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Find the minimum and maximum elements in the vector
    int min_element = *std::min_element(numbers.begin(), numbers.end());
    int max_element = *std::max_element(numbers.begin(), numbers.end());
    std::cout << "Minimum element: " << min_element << std::endl;
    std::cout << "Maximum element: " << max_element << std::endl;

    // Find the sum of all elements in the vector
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum of all elements: " << sum << std::endl;

    // Find the total count of even numbers in the vector
    int even_count = std::count_if(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0;
    });
    std::cout << "Total even numbers: " << even_count << std::endl;

    // Reverse the vector
    std::reverse(numbers.begin(), numbers.end());

    // Print the reversed vector
    std::cout << "Reversed vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}