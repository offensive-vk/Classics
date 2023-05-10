#include<stdio.h>
#include<conio.h>
// program to add two numbers using pointer. suuuuuuuuuuuuuuuuuuuuuuuu
int main(){
	int *a, *b, sum;
	int first, second;
	printf("Enter two Numbers : ");
	scanf("%d %d", &first, &second);
	a = &first;
	b = &second;
	sum = *a + *b;
	printf("Processing...\n");
	sleep(3);
	printf("=> Sum of entered numbers : %d\n", sum);
	return 0;
}
