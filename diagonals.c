#include<stdio.h>
int main(){
	//sum of all diagonals in a matrix.
   	int size;
   	printf("Enter Row Size and Column Size ::");
   	scanf("%d", &size);
    int i,j,arr[size][size],sum1=0,sum2=0,n;
    printf("Enter Array Elements : ");
    for(i=0; i<size; i++)
    {
    	for(j=0; j<size; j++)
    	{
    		scanf("%d", arr[i][j]);
		}
	}
	if(i==j)
	    sum1 = sum1+arr[i][j];
	else if(size+1 == size-1)
	    sum2  = sum2+arr[i][size];
	return 0;
}
