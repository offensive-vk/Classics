#include<stdio.h>
int main() {
	int *a, *b;
	int first, second;
	int *temp;
	printf("Enter two Numbers : ");
	scanf("%d %d", &first, &second);
	a = &first;
	b = &second;
	printf("Processing...\n");
	sleep(1);
    printf("Before Swapping :\na = %d\nb = %d", *a, *b);
    // begin swapping;
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("\n");
    printf("After Swapping :\na = %d\nb = %d", *a, *b);
	return 0;
}