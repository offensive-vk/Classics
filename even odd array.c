#include<stdio.h>
int main(){
	int size, even = 0, odd = 0;
	printf("Enter Array Size :");
	scanf("%d", &size);
	int arr[size];
	int i;
	printf("Enter Array Elements : ");
	for(i = 0; i<size; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i]%2 == 0)
		   even++;
		else
		   odd++;
	}
	printf("Total Even Elements are : %d\n", even);
	printf("Total Odd Elements are : %d\n", odd);
	return 00;
}
