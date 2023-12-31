#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr = (int *)malloc(sizeof(int));
	printf("Enter A Number :");
	scanf("%d", ptr);
	printf("Enter A Number :");
	scanf("%d", ptr+1);
	printf("Address of Ptr is %d\n", &ptr);
	printf("Address of Ptr is %d\n", &ptr+1);
	printf("Value = %d\n", *ptr);
	printf("\tSum = %d", *ptr+*(ptr+1));
	free(ptr);
	getch();
	return 0;
}
