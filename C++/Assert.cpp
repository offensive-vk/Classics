#include <iostream>
#include <vector>
#include <cassert>

/**
 * @brief Verifies if the given array
 * contains the given number on it.
 * @tparam T the type of array (e.g., int, float, etc.)
 * @param arr the array to be used for checking
 * @param number the number to check if it's inside the array
 * @return false if the number was NOT found in the array
 * @return true if the number WAS found in the array
 */
template <typename T>
bool is_number_on_array(const std::vector<T> &arr, const int &number) {
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        if (arr[i] == number) {
            return true;
        }
        else {
            // Number not in the current index, keep searching.
        }
    }

    return false;
}

/**
 * @brief Self-test implementations
 * @returns void
 */
static void tests() {
    std::vector<int> arr = { 9, 14, 21, 98, 67 };

    assert(is_number_on_array(arr, 9) == true);
    assert(is_number_on_array(arr, 4) == false);
    assert(is_number_on_array(arr, 98) == true);
    assert(is_number_on_array(arr, 512) == false);

    std::cout << "All tests have successfully passed!\n";
}

/**
 * @brief Main function
 * @returns 0 on exit
 */
int main() {
    tests(); // run self-test implementations
    return 0;
}
