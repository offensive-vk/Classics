#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <memory>
#include <memory.h>

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Using malloc for dynamic memory allocation
    int* arrMalloc = (int*)malloc(size * sizeof(int));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc." << std::endl;
        return 1;
    }

    // Using calloc for dynamic memory allocation
    int* arrCalloc = (int*)calloc(size, sizeof(int));
    if (arrCalloc == nullptr) {
        std::cout << "Memory allocation failed using calloc." << std::endl;
        return 1;
    }

    // Assign values to the arrays
    for (int i = 0; i < size; ++i) {
        arrMalloc[i] = i + 1;
        arrCalloc[i] = (i + 1) * 10;
    }

    // Display the arrays
    std::cout << "Array created using malloc:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arrMalloc[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array created using calloc:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arrCalloc[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate memory using free
    free(arrMalloc);
    free(arrCalloc);

    return 0;
}