#include<stdio.h>
int main()
{
   int main,i, sum;
   int array[5];
   printf("Enter Number : ");
   for (i = 0; i<5; i++)
   {
   	    scanf("%d", &array[i]);
   }
   printf("Array Elements : \n");
   for(i = 0; i<5; i++)
   {
   	printf("%d ", array[i]);
   }
   return 0;  
}
