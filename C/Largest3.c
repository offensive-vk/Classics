#include<stdio.h>
int main()
{
	int a,b,c,result;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	result = ((a>b) && (a>c))? printf("a is greatest") : (b>c)? printf("b is greatest") : printf("c is greatest");
	return 0;
}