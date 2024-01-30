// program to take user input and swap the values without using third variable.
#include <stdio.h>
int main()
{
    int x = 87, y = 45;
    printf("Before  Swapping \nx = %d\ny = %d\n", x, y);
    // temp = x;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("-----------------------\n");
    printf("After Swapping \nx = %d\ny = %d", x, y);
    return 0;
}
