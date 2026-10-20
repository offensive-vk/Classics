#include <stdio.h>

int main(void) {
	int size;
	printf("Enter Size of Array : ");
	if (scanf("%d", &size) != 1 || size <= 0) {
		printf("Invalid size.\n");
		return 1;
	}

	int arr[size];
	int *ptr = arr;

	printf("Enter %d elements:\n", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", ptr + i);
	}

	printf("\nThe Array Data accessed via Pointer arithmetic:\n");
	for (int i = 0; i < size; i++) {
		printf("Element %d: %d (at address %p)\n", i, *(ptr + i), (void*)(ptr + i));
	}
	return 0;
}