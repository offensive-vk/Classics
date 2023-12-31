#include<stdio.h>
int main(){
	int n,last, dup, sum=0;
	printf("Enter A Number : \t");
	scanf("%d", &n);
	dup = n;
	last = n%10;
	while(n>0)
	{
		sum = sum + n%10;
		n = n/10;
	}
	if(last == sum)
	   printf("Number is Handsome : %d", dup);
	else
	   printf("Number is NOT Handsome : %d", dup);
	return 0;
}
