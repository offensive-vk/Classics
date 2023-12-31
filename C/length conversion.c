#include<stdio.h>
int main()
{
	int c,m,k;
	printf("Enter the value of c:");
	scanf("%d",&c);
	k = c/100000;
	m = (c - k*100000)/100;
	c = c - k*100000 - m*100;
	printf("k = %d",k);
	printf("\nm = %d",m);
	printf("\nc = %d",c);
	return 0;
	
}
