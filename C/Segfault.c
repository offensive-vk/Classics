// C program to demonstrate segmentation fault by Accessing an address that is freed

#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    // allocating memory to p
    int* p = (int*)malloc(8);
    *p = 100;
 
    // deallocated the space allocated to p
    free(p);
 
    // core dump/segmentation fault as now this statement is illegal
    *p = 110;
    printf("%d", *p);
 
    return 0;
}