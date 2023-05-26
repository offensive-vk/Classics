#include<stdio.h>
int main(){
    int size, i,j, min, temp;
	printf("Enter Array Size :");
	scanf("%d", &size);
	int arr[size];
	printf("Enter Array Elements : ");
	for(i = 0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
    //selection sorting in c.
    for(i=0; i<size-1; i++)
    {
    	min = i;
    	for(j=i+1; i<size; j++)
    	{
    		if(arr[j]<arr[min])
    		   min = j;
		}
		if(min != i)
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	printf("Array Elements after Sorting :\n");
	for(i=0; i<size; i++)
	{
	    printf(" %d ", arr[i]);
    }
	return 0;
}
