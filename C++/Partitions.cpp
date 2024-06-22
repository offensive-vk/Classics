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
    std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // std::partition
    std::vector<int> vec1 = vec;
    std::partition(vec1.begin(), vec1.end(), [](int n) { return n % 2 == 0; });
    std::cout << "std::partition result (evens first): ";
    printVector(vec1);

    // std::stable_partition
    std::vector<int> vec2 = vec;
    std::stable_partition(vec2.begin(), vec2.end(), [](int n) { return n % 2 == 0; });
    std::cout << "std::stable_partition result (evens first, stable): ";
    printVector(vec2);

    // std::partition_point
    auto it = std::partition_point(vec2.begin(), vec2.end(), [](int n) { return n % 2 == 0; });
    std::cout << "Partition point in stable partitioned vector: " << std::distance(vec2.begin(), it) << '\n';

    return 0;
}