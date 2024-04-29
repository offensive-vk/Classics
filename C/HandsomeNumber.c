#include<stdio.h>
void handsome(int n) {
	int dup,sum=0, last;
	dup = n;
	last = n%10;
	n = n/10;
	while(n != 0)
	{
		sum = sum + n%10;
		n = n/10;
	}
	if(last == sum)
		printf("Number is Handsome : %d", dup);
	else
		printf("Number is NOT Handsome : %d", dup);
}
int main() {
    int n;
	printf("Enter A Number : \t");
	scanf("%d", &n);
	handsome(n);
	return 0;
}