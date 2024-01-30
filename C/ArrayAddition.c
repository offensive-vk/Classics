#include <stdio.h>
int main()
{

	printf("\n\tPlaying With 2D Arrays...\n");
	int row, column, i, j;
	int sum[row][column];

	printf("Enter Number of Rows: \n");
	scanf("%d", &row);
	printf("Enter Number of Columns: \n");
	scanf("%d", &column);
	int arr1[row][column]; // first array
	printf("You Chose %d Rows... %d Columns...\n", row, column);
	for (i = 0; i < row; i++)
	{
		printf("Enter Array Elements : \n");
		for (j = 0; j < column; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	
	printf("Enter Number of Rows: \n");
	scanf("%d", &row);
	printf("Enter Number of Columns: \n");
	scanf("%d", &column);
	int arr2[row][column]; // second array..
	printf("You Chose %d Rows... %d Columns...\n", row, column);
	for (i = 0; i < row; i++)
	{
		printf("Enter Array Elements : \n");
		for (j = 0; j < column; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}

	// addition of matrices...
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			sum[row][column] = arr1[i][j] + arr2[i][j];
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}