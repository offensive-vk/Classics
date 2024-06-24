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

    // std::min and std::max
    int minVal = *std::min_element(vec.begin(), vec.end());
    int maxVal = *std::max_element(vec.begin(), vec.end());
    std::cout << "Minimum element: " << minVal << '\n';
    std::cout << "Maximum element: " << maxVal << '\n';

    // std::minmax_element
    auto minmax = std::minmax_element(vec.begin(), vec.end());
    std::cout << "Minimum element using std::minmax_element: " << *minmax.first << '\n';
    std::cout << "Maximum element using std::minmax_element: " << *minmax.second << '\n';

    return 0;
}
