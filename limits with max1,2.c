#include<stdio.h> 
#include<limits.h>
int main(){
	printf("\t>> A Program By Vedansh <<\n");
	//Finding Largest and Smallest Number in Array..
	int size, largest,smallest, i,j, max1, max2, INT_MIN;
	printf("Enter Array Size :");
	scanf("%d", &size);
	int arr[size];
	printf("Enter Array Elements : ");
	for(i = 0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
    max1 = max2 = INT_MIN;
	for(i=0; i<size; i++)
	{
		if(arr[i]>max1)
		{
			max2 = max1;
			max1 = arr[i];
		}
		else if(arr[i]>max2 && arr[i>max1])
	    { 
		    max2 = arr[i];
	    }
	}
	printf("\t\tLargest Element is %d",max1);
