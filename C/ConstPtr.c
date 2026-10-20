#include <stdio.h>

// Demonstrates a constant pointer to a mutable integer (int *const p)
int main(void) {
	int x = 55, y = 46;
	int *const p = &x; // p cannot point to another address, but the value at *p can be modified
	// p = &y;         // Compile error: assignment of read-only variable 'p'
	*p = 100;          // Valid: modifies x through pointer
	printf("Value of x via *p: %d\n", *p);
	return 0;
}