#include <stdio.h>
#include <stdlib.h>

int main() {
    // Using malloc: Allocate memory for an integer
    int *dynamicInt = (int *)malloc(sizeof(int));
    if (dynamicInt == NULL) {
        printf("Memory allocation failed for dynamicInt.\n");
        return 1; // Exit with an error code
    }

    // Using calloc: Allocate memory for an array of five integers
    int *dynamicIntArray = (int *)calloc(5, sizeof(int));
    if (dynamicIntArray == NULL) {
        printf("Memory allocation failed for dynamicIntArray.\n");
        free(dynamicInt); // Free previously allocated memory
        return 1; // Exit with an error code
    }

    // Using realloc: Resize the dynamically allocated array to hold ten integers
    int *resizedArray = (int *)realloc(dynamicIntArray, 10 * sizeof(int));
    if (resizedArray == NULL) {
        printf("Memory reallocation failed for resizedArray.\n");
        free(dynamicInt);       // Free previously allocated memory
        free(dynamicIntArray);  // Free previously allocated memory
        return 1; // Exit with an error code
    }

    // Input values for the dynamic integer
    printf("Enter a value for dynamicInt: ");
    scanf("%d", dynamicInt);

    // Display the dynamic integer
    printf("Value stored in dynamicInt: %d\n", *dynamicInt);

    // Input values for the dynamic array
    printf("Enter five values for dynamicIntArray: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &dynamicIntArray[i]);
    }



    return 0; // Exit successfully
}