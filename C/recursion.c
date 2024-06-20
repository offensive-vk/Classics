#include<stdio.h>
#include<conio.h>

void Show(int n) { 
	if(n > 0) {
		printf("\t %d ",n);
		Show(n-1);
	}
}
int main() {
	//program, i.e. calling the function
	int x;
	printf("Enter Your Lucky Number : ");
	scanf("%d", &x);
	Show(x);
}
