#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of a:");
	scanf("%d",&a);
	(a%2==0)? printf("a is even number") : printf("a is odd number");
	return 0;
}
