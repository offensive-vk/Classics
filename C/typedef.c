#include <stdio.h>
// Use case 1: Creating an alias for a basic data type
typedef int integer;

// Use case 2: Creating an alias for a structure
typedef struct {
    int x;
    int y;
} Point;

// Use case 3: Creating an alias for a function pointer type
typedef void (*FunctionPointer)(int);

// Use case 4: Creating an alias for an array type
typedef int IntArray[5];
int main() {
    // Use case 1: Using the typedef alias for int
    integer num = 42;
    printf("Use case 1: integer alias: %d\n", num);

    // Use case 2: Using the typedef alias for a structure
    Point p;
    p.x = 10;
    p.y = 20;
    printf("Use case 2: Point structure: (%d, %d)\n", p.x, p.y);

    // Use case 3: Using the typedef alias for a function pointer
    FunctionPointer fp = &printf;
    printf("Use case 3: Function pointer alias: ");
    fp("Hello, typedef!\n");

    // Use case 4: Using the typedef alias for an array
    IntArray arr = {1, 2, 3, 4, 5};
    printf("Use case 4: IntArray alias: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}