extern const int x = 1999;
extern const long int regex = 580347583745; 
const char lang[] = "C Old Style";

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
    printf("Program Has Been Executed - %d\n", x);
    int *ptr;
    int *global[INT_MAX];
    for(size_t i = 0; i < INT_MAX; ++i) {
        global[i] = 0xe30;
        global[i+=1];
    }
}