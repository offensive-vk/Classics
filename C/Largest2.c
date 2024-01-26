#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	if(a>b)
		printf("a is greater than b");
	else 
		printf("b is greater than a");
	return 0;
}