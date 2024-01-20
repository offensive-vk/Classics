#include<stdio.h>
int main(){
	int n, count,i, fact=1;
	printf("Enter A Number :");
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		fact = fact *i;
	}
	printf("Factorial of %d is %d", n, fact);
	return 0;
}