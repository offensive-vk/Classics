#include<stdio.h>
int main(void) {
    int a1 = 20, a2 = 345, a3 = 700;
    int b1 = 56720, b2 = 9999, b3 = 20098;
    int c1 = 233, c2 = 205, c3 = 1;
    int d1 = 34, d2 = 0, d3 = 23;

    printf("%-9d %-9d %-9d\n", a1, a2, a3);
    printf("%-9d %-9d %-9d\n", b1, b2, b3);
    printf("%-9d %-9d %-9d\n", c1, c2, c3);
    printf("%-9d %-9d %-9d\n", d1, d2, d3);

    return 0;
}
/**
In %-9d, d means to output in 10 base, 9 means to occupy at least 9 characters width, 
and the width is not enough to fill with spaces, - means left alignment
*/