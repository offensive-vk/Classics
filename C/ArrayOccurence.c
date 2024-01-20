#include <stdio.h>
int main()
{
	int size, count = 0, n, i, j;
	printf("Enter Size of Array : ");
	scanf("%d", &size);
	int arr[size];
	for (i = 0; i < size; i++)
	{
		scanf("%d", arr[i]);
	}
	printf("Enter Element To Remove:");
	scanf("%d", &n);
	for (i = 0; i < size; i++)
	{
		if (n == arr[i])
			count++;
	}
	printf("In Array Occurence of %d is %d", n, count);
	return 0;
}