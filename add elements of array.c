#include <stdio.h>
int main()
{
    int row,column,i,j;       //Row Column Declaration
    
	printf("Enter Number of Rows: \n");
	scanf("%d", &row);
	printf("Enter Number of Columns: \n");
	scanf("%d", &column);
    
	int arr[row][column];   //Matrix Declaration
    printf("Enter the elements of the matrix\n");
    for(i=0;i<row;i++)     //Matrix Initialization
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nElements in the matrix are \n");
    for(i=0;i<row;i++)     //Print Matrix
   {
        for(j=0;j<column;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nRow Sum....\n");
    for(i=0;i<row;i++)   
    {
        int rsum=0;
        for(j=0;j<column;j++)
        {
            rsum=rsum+arr[i][j];
        }
        printf("\nSum of all the elements in row %d is %d\n",i,rsum);
    }
    printf("\nColumn Sum....\n");
    for(i=0;i<row;i++)
    {
        int csum=0;
        for(j=0;j<column;j++)
        {
            csum=csum+arr[j][i];
        }
        printf("\nSum of all the elements in column %d is %d\n",i,csum);
    }
    return 0;
}
