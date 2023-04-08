#include<stdio.h>
#include<string.h>

//write a program to print the factorial of a given number using recursion.

int fact(int n)
{
   if(n==0)
       return 1;
   else
       return(n*fact(n-1));
}
int main()
{
  int num,f;
  printf("Enter a number: ");
  scanf("%d",&num);
  f=fact(num);
  printf("\nFactorial of %d is: %d",num,f);
  return 0;
}

