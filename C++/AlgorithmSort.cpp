#include <iostream>
#include <vector>
#include <algorithm>

// Function to print a vector
void printVector(const std::vector<int>& v) {
    for (int n : v) {
        std::cout << n << ' ';
    }
    std::cout << '\n';
}

int main() {
    // Initialize a vector with some unsorted integers
    std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Demonstrate std::sort
    std::vector<int> vec1 = vec;
    std::sort(vec1.begin(), vec1.end());
    std::cout << "std::sort result: ";
    printVector(vec1);

    // Demonstrate std::stable_sort
    std::vector<int> vec2 = vec;
    std::stable_sort(vec2.begin(), vec2.end());
    std::cout << "std::stable_sort result: ";
    printVector(vec2);

    // Demonstrate std::partial_sort
    std::vector<int> vec3 = vec;
    std::partial_sort(vec3.begin(), vec3.begin() + 5, vec3.end());
    std::cout << "std::partial_sort (first 5 elements sorted) result: ";
    printVector(vec3);

    // Demonstrate std::nth_element
    std::vector<int> vec4 = vec;
    std::nth_element(vec4.begin(), vec4.begin() + 5, vec4.end());
    std::cout << "std::nth_element (element at position 5 is sorted, others are partitioned) result: ";
    printVector(vec4);
    
    return 0;
}