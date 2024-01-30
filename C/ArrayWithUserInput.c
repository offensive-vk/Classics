#include <stdio.h>
int main()
{

	int row, column, i, j;
	printf("Enter Number of Rows: \n");
	scanf("%d", &row);
	printf("Enter Number of Columns: \n");
	scanf("%d", &column);
	int arr[row][column];
	printf("You Chose %d Rows... %d Columns...\n", row, column);
	for (i = 0; i < row; i++)
	{
		printf("Enter Array Elements : \n");
		for (j = 0; j < column; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Array Elements are : \n");
	printf("\n");
	for (i = 0; i < row; i++)
	{
		printf("\t[");
		for (j = 0; j < column; j++)
		{
			printf(" %d ", arr[i][j]);
		}
		printf("]");
		printf("\n");
	}
	return 0;
}