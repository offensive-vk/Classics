#include <stdio.h>
#include <string.h>

void reverseStringIterative(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters at start and end indices
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move indices towards the center
        start++;
        end--;
    }
}
void reverseStringRecursive(char str[], int start, int end) {
    if (start >= end) {
        return; // Base case: do nothing if start and end meet or cross each other
    }

    // Swap characters at start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call with updated indices
    reverseStringRecursive(str, start + 1, end - 1);
}

int main() {
    char myString[] = "Hello, World!";
    
    // Print original string
    printf("Original String: %s\n", myString);

    // Reverse the string using the iterative solution
    reverseStringIterative(myString);

    // Print reversed string
    printf("Reversed String: %s\n", myString);
    
    // Recursive 
    char myString[] = "Hello, World!";
    
    // Print original string
    printf("Original String: %s\n", myString);

    // Reverse the string using the recursive solution
    reverseStringRecursive(myString, 0, strlen(myString) - 1);

    // Print reversed string
    printf("Reversed String: %s\n", myString);
    return 0;
}
