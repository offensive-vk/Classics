#include<stdio.h>
int main(){
int size, temp, i,j;
	printf("Enter Array Size :");
	scanf("%d", &size);
	int arr[size];
	printf("Enter Array Elements : ");
	for(i = 0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<size; i++)
	{
		for(j=0; j<size-i-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				arr[j] = arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	printf("Array Elements after Sorting :");
	for(i=0; i<size; i++)
	{
	   printf("%d", arr[i]);
	}
	return 0;
}
