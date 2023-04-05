#include<stdio.h>
int main(){
	int size, flag = 0, search, start, end, mid;
	printf("Enter Size of Array :");
	scanf("%d", &size);
	int arr[size], i;
	printf("Enter Array Elements :");
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter Searching Element : ");
	scanf("%d", &search);
	start = 0;
	end = size-1;
	while(start<=end)
	{
		mid = (start+end)/2;
		if(search == arr[mid])
		{
			flag = 1;
			break;
		}
		else if(search<arr[mid])
		    end=mid-1;
		else
		    start = mid+1; 
	}
	if(flag == 1)
	   printf("Element Found At Position %d", mid+1);
	else
	   printf("Element Not Found ");
	return 0;
	
}
