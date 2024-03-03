#include<stdio.h>
int main(void) {
    printf("I am learning C.");
    int testInteger = 5;
    printf("Number = %d", testInteger);

    float f = 5.99; // floating point number
    printf("Value = %f", f);

    short a = 0b1010110; // binary number
    int b = 02713; // octal number
    long c = 0X1DAB83; // hexadecimal number

    // output in octal form
    printf("a=%ho, b=%o, c=%lo\n", a, b, c);
    // output => a=126, b=2713, c=7325603

    // Output in decimal form
    printf("a=%hd, b=%d, c=%ld\n", a, b, c);
    // output => a=86, b=1483, c=1944451

    // output in hexadecimal form (letter lowercase)
    printf("a=%hx, b=%x, c=%lx\n", a, b, c);
    // output => a=56, b=5cb, c=1dab83

    // Output in hexadecimal (capital letters)
    printf("a=%hX, b=%X, c=%lX\n", a, b, c);
    // output => a=56, b=5CB, c=1DAB83

    return 0;
}