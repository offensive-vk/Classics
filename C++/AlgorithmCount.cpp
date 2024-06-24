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

    // std::count
    int count5 = std::count(vec.begin(), vec.end(), 5);
    std::cout << "Number of occurrences of 5: " << count5 << '\n';

    // std::count_if
    int countOdd = std::count_if(vec.begin(), vec.end(), [](int n){ return n % 2 != 0; });
    std::cout << "Number of odd elements: " << countOdd << '\n';

    return 0;
}
