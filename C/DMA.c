#include <stdio.h>
#include <stdlib.h>

int main() {
    // Using malloc: Allocate memory for an integer
    int *dynamicInt = (int *)malloc(sizeof(int));
    if (dynamicInt == NULL) {
        printf("Memory allocation failed for dynamicInt.\n");
        return 1; // Exit with an error code
    }



    return 0; // Exit successfully
}