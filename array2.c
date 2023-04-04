#include<stdio.h>
int main(){
	//playing with arrays...
	int i,j;
	int arr[2][3]= {{12,56},{44,78,34}};
	printf("Array Elements Are : \t");
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d,", arr[i][j]);
		}	
		printf("\n");
	}
	return 0;
}
