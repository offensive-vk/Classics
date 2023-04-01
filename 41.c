#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i, sum=0;
	printf("Enter The Value of N:");
	scanf("%d", &n);
	printf("\n Enter Number : ");
	for(i=0; i<n; i++){
		int *p = (int *)malloc(n* sizeof(int));
		scanf("%d", p+i);
		sum = sum+ *(p+i);
	}
	printf("\nSum of Number = %d\n", sum);
	return 0;
	
}
