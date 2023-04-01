#include<stdio.h>
#include<conio.h>
int main(){
	int size, i, j;
    printf("Enter Size of Array : ");
    scanf("%d", &size);
    int *arr[size]; 
    printf("Enter Array data :");
    for(i=0; i<size; i++)
    {
    	scanf("%d", arr+i);
	}
	for(i=0; i<size; i++)
	{
		printf("The Array Data in Pointer : %d", *(arr[i]));
	}
    return 0;
}
