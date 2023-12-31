#include<stdio.h> 

int main(){
	printf("\t>> A Program By Vedansh <<\n");
	//Finding Largest and Smallest Number in Array..
	int size, largest,smallest, i,j;
	printf("Enter Array Size :");
	scanf("%d", &size);
	int arr[size];
	printf("Enter Array Elements : ");
	for(i = 0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	largest = arr[0];
	int second_largest = arr[0];
    for(i = 1; i < size; i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }
	smallest = arr[0];
	for(i=1; i<size; i++)
	{
		if(smallest > arr[i])
		{
			smallest = arr[i];
		}
	}
	printf("\t\tElement %d is Largest \n", largest);
	printf("\t\tSecond Largest Element : %d\n", second_largest);
	printf("\t\tElement %d is Smallest \n", smallest);
	return 0;
}

