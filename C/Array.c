#include<stdio.h>
int main(void) {
    int myNumbers[4];

    myNumbers[0] = 25;
    myNumbers[1] = 50;
    myNumbers[2] = 75;
    myNumbers[3] = 100;

    int myNumbers[] = {25, 50, 75, 100};

    printf("%d", myNumbers[0]);

    int myNumbers[] = {25, 50, 75, 100};
    myNumbers[0] = 33;

    printf("%d", myNumbers[0]);

    int myNumbers[] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    }

    return 0;
}