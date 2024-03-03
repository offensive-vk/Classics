/**
C program to demonstrate segmentation fault when uninitialized pointer is accessed
*/
#include <stdio.h>
int main()
{
    int* ptr;
    int* nptr = NULL;
    printf("%d %d", *ptr, *nptr);
    return 0;
}

/*
C program to demonstrate segmentation fault by modifying a string literal 
*/
#include <stdio.h>
 
int main()
{
    char* str;

    // Stored in read only part of data segment 
    str = "GfG";
 
    // Problem:  trying to modify read only memory
    *(str + 1) = 'n';
    return 0;
}

/**
    C program to demonstrate segmentation fault when array out of bound is accessed.
*/
#include <stdio.h>
 
int main(void)
{
    int arr[2];
 
    // Accessing out of bound
    arr[3] = 10;
 
    return (0);
}

/**
    C program to illustrate the segmentation fault due to stack overflow
*/
#include <stdio.h>
 
int main()
{
    int arr[2000000000];
 
    return 0;
}