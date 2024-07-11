#include <stdio.h>

int main() {
    int *nullPointer = NULL; // Null pointer
    int uninitializedValue; // Uninitialized variable

    // Trying to dereference a null pointer (This will cause a segmentation fault)
    // printf("Value at null pointer: %d\n", *nullPointer);

    // Printing the uninitialized value (This will print a garbage value)
    printf("Uninitialized value: %d\n", uninitializedValue);

    // Properly initializing the pointer and using it
    int value = 10;
    nullPointer = &value;
    printf("Value at nullPointer: %d\n", *nullPointer);

    return 0;
}
