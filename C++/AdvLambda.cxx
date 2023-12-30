#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <vector>

int main(int argc, char const *argv[])
{
        // Use Case 1: Basic Lambda Function
    auto sum = [](int a, int b) {
        return a + b;
    };
    std::cout << "Sum: " << sum(5, 7) << std::endl;

    // Use Case 2: Lambda Function as a Predicate in std::find_if
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 7;
    auto it = std::find_if(numbers.begin(), numbers.end(), [target](int num) {
        return num == target;
    });
    if (it != numbers.end()) {
        std::cout << "Found " << target << " in the vector." << std::endl;
    } else {
        std::cout << target << " not found in the vector." << std::endl;
    }

    // Use Case 3: Lambda Function as a Comparator in std::sort
    std::vector<int> unsorted = {5, 2, 8, 1, 6};
    std::sort(unsorted.begin(), unsorted.end(), [](int a, int b) {
        return a > b; // Sort in descending order
    });
    std::cout << "Sorted vector in descending order: ";
    for (int num : unsorted) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Use Case 4: Capture External Variables
    int multiplier = 2;
    auto multiplyBy = [multiplier](int x) {
        return x * multiplier;
    };
    std::cout << "Multiply 3 by " << multiplier << ": " << multiplyBy(3) << std::endl;
    return 0;
}