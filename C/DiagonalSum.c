#include <stdio.h>
int main()
{
	// sum of all diagonals in a matrix.
	int row, column;
	printf("Enter Row Size :");
	scanf("%d", &row);
	printf("Enter Column Size : ");
	scanf("%d", &column);
	int i, j, arr[row][column], sum1 = 0, sum2 = 0;
	if (row == column)
	{
		for (i = 0; i < row; i++)
		{
			printf("Enter Array Elements: %d : ", i + 1);
			for (j = 0; j < column; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}

		printf("The matrix is :\n");

		for (i = 0; i < row; i++)
		{
			for (j = 0; j < column; j++)
				printf("% 4d", arr[i][j]);
			printf("\n");
		}
		for (i = 0; i < row; i++)
		{
			sum1 = sum1 + arr[i][i];
			sum2 = sum2 + arr[i][row - i - 1];
		}
		printf("Sum of Main Diagonal (Right): %d\n", sum1);
		printf("Sum of Off Diagonal (Left): %d\n", sum2);
	}
	else
	{
		printf("\n This is not a diagonal matrix !\n");
	}
	return 0;
}