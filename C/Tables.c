#include<stdio.h>
int main() {
	int n, i, j;
	printf("Enter A Number To Get Table :");
	scanf("%d", &n);
    for(i = 2; i<= n; i++)
	{
		printf("\n\t Table of %d :\n", i);
		for(j = 1; j<=10; j++)
		{
			printf("%d * %d = %d", i, j, i*j);
			printf("\n----------------------\n\t");
		}
    }
	return 0;   	
}