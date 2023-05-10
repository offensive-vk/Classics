#include<stdio.h>
#include<conio.h>
int main(){
	int size, count=0, n, i, j;
    printf("Enter Size of Array : ");
    scanf("%d", &size);
    int *arr[size]; 
    for(i=0; i<size; i++)
    {
    	scanf("%d", *arr[i]);
	}
	for(i=0; i<size; i++)
	{
		printf("The Array Data in Pointer : \n", *arr[i]);
	}
    return 0;
}
