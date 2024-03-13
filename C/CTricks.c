#include <stdio.h>

// Function to swap two integers using bitwise XOR operator
void swap(int *a, int *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main() {
    // Declaring variables
    int x = 10, y = 20;

    // Printing initial values
    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Swapping values using bitwise XOR operator
    swap(&x, &y);

    // Printing swapped values
    printf("After swapping: x = %d, y = %d\n", x, y);

    // Using the ternary operator to find the maximum of two numbers
    int max = (x > y) ? x : y;
    printf("The maximum of %d and %d is: %d\n", x, y, max);

    // Using sizeof operator to find the size of a data type
    printf("Size of int data type: %zu bytes\n", sizeof(int));

    // Using typedef to create an alias for a data type
    typedef unsigned long long ull;
    ull bigNumber = 18446744073709551615ULL;
    printf("A really big number: %llu\n", bigNumber);

    // Using a single printf statement to print multiple lines
    printf("This\nis\na\nmulti-line\noutput\n");

    // Using the comma operator to perform multiple operations in a single statement
    int a = 5, b = 10, c = 15;
    printf("Value of a: %d, b: %d, c: %d\n", a, b, c), a++, b--, c += 5;
    printf("After comma operator: Value of a: %d, b: %d, c: %d\n", a, b, c);

    return 0;
}
