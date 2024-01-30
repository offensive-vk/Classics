#include <stdio.h>
int main()
{
	// sum of all diagonals in a matrix.
	int row, column;
	printf("Enter Row Size :");
	scanf("%d", &row);
	printf("Enter Column Size : ");
	scanf("%d", &column);
	int i, j, arr1[row][column], arr2[row][column], prod[row][column];
	if (row == column)
	{
		for (i = 0; i < row; i++)
		{
			printf("Enter Array Elements for 1st Array : %d : ", i + 1);
			for (j = 0; j < column; j++)
			{
				scanf("%d", &arr1[i][j]);
			}
		}
		for (i = 0; i < row; i++)
		{
			printf("Enter Array Elements for 2nd Array : %d : ", i + 1);
			for (j = 0; j < column; j++)
			{
				scanf("%d", &arr2[i][j]);
			}
		}
		system("cls");
		//	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t");

		printf("1st Matrix :\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < column; j++)
				printf("% 4d", arr1[i][j]);
			printf("\n");
		}
		printf("2nd Matrix :\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < column; j++)
				printf("% 4d", arr2[i][j]);
			printf("\n");
		}
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < column; j++)
			{
				prod[i][j] = arr1[i][j] * arr2[i][j];
			}
		}
		printf("Product of Two Matrices: \n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < column; j++)
			{
				printf(" %d ", prod[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Can't' calculate ");
	}
	return 0;
}