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

    // std::find
    auto it = std::find(vec.begin(), vec.end(), 5);
    if (it != vec.end()) {
        std::cout << "First occurrence of 5 found at position: " << std::distance(vec.begin(), it) << '\n';
    } else {
        std::cout << "5 not found in the vector.\n";
    }

    // std::find_if
    auto itOdd = std::find_if(vec.begin(), vec.end(), [](int n){ return n % 2 != 0; });
    if (itOdd != vec.end()) {
        std::cout << "First odd element found at position: " << std::distance(vec.begin(), itOdd) << '\n';
    } else {
        std::cout << "No odd element found in the vector.\n";
    }

    // Sorting before using std::binary_search
    std::sort(vec.begin(), vec.end());
    bool found = std::binary_search(vec.begin(), vec.end(), 5);
    std::cout << "5 " << (found ? "is" : "is not") << " found in the sorted vector.\n";

    return 0;
}
