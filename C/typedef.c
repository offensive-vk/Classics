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
