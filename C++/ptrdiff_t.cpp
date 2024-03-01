#include <iostream>
#include <cstddef> // for ptrdiff_t

int main() {
    int array[] = {10, 20, 30, 40, 50};

    int *ptr1 = &array[1];
    int *ptr2 = &array[3];

    // Calculate the difference between the two pointers
    ptrdiff_t difference = ptr2 - ptr1;

    std::cout << "Address of ptr1: " << ptr1 << std::endl;
    std::cout << "Address of ptr2: " << ptr2 << std::endl;
    std::cout << "Difference between ptr2 and ptr1: " << difference << std::endl;

    return 0;
}
