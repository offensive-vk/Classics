#include <stdio.h>
#include <unistd.h> 

int main() {
    int i;
    for (i = 1; i <= 100; i++) {
        printf("%d", i);
        fflush(stdout); // Ensure the number is immediately displayed

        sleep(1); // Sleep for 1 second

        int j;
        for (j = 0; j < (int) (sizeof(int) * 2.5); j++) { 
            printf("\b \b"); // Move the cursor back and overwrite with spaces
            fflush(stdout); // Ensure the space is immediately displayed
        }
    }
    return 0;
}
