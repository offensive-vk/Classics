#include <stdio.h>
int main()
{
	
	int size; 
	printf("Enter Size of Array : ");
	scanf("%d", &size);
	int arr[size], i, flag = 0, search;
	printf("Enter Array Elements :"); // taking array elements as input.
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter Element To Search :"); // search for element.
	scanf("%d", &search);
	for (i = 0; i < size; i++)
	{
		if (arr[i] == search)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("Element Found At Position %d", i);
	else
		printf("Element Not Found ", search);
	return 0;
}