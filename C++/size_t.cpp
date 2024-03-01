#include <iostream>
#include <cstddef> // for size_t

int main() {
    int array[] = {10, 20, 30, 40, 50};

    // Calculate the size of the array
    size_t arraySize = sizeof(array) / sizeof(array[0]);

    std::cout << "Size of array: " << arraySize << std::endl;

    return 0;
}
