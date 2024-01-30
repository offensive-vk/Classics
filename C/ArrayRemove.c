#include <stdio.h>
int main()
{
	int size, i, num, flag = 0;
	printf("Enter Array Size :");
	scanf("%d", &size);
	int arr[size];
	printf("Enter Array Elements :");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter Element to Remove: ");
	scanf("%d", &num);
	for (i = 0; i < size; i++)
	{
		if (flag == 0)
		{
			if (arr[i] == num)
				flag = 1;
		}
		else
			arr[i - 1] = arr[i];
	}
	if (flag == 1)
	{
		arr[i - 1] = 0;
		size--;
	}
	printf("Array Elements Are : ");
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	return 0;
}