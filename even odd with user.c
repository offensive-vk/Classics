#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of a:");
	scanf("%d",&a);
	if(a%2==0)
		printf("a is even");
	else
		printf("a is odd");
	return 0;
}
