#include <stdio.h>

int main()
 
   {
   	//sum of all diagonals in a matrix.
   	int row, column;
   	printf("Enter Row Size :");
   	scanf("%d", &row);
   	printf("Enter Column Size : ");
   	scanf("%d", &column);
    int i,j,arr1[row][column],sum=0,n;

    printf("---------------------------------------\n");	 
	//printf("Input the size of the square matrix : ");
    //scanf("%d", &n); 
	printf("Input elements in the first matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
	        printf("element - [%d],[%d] : ",i,j);
	        scanf("%d",&arr1[i][j]);
		    if (i==j) 
			sum = sum+arr1[i][j];
        }
    }  
	printf("The matrix is :\n");
	for(i=0;i<row;i++)
	{
	   for(j=0; j<column; j++)
	   printf("% 4d",arr1[i][j]);
	   printf("\n");
    }
    
	printf("Addition of the right Diagonal elements is :%d\n",sum);
    return 0;
	}
