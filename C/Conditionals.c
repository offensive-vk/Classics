#include <stdio.h>

int main() {
    int num = 5;

    // If-else statement
    if (num > 0) {
        printf("%d is positive\n", num);
    } else if (num < 0) {
        printf("%d is negative\n", num);
    } else {
        printf("%d is zero\n", num);
    }

    // Switch statement
    switch (num) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        default:
            printf("Unknown number\n");
    }

    // Ternary operator
    int x = 10;
    int y = 5;
    int max = (x > y) ? x : y;
    printf("Max value is: %d\n", max);

    return 0;
}
