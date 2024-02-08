// #include <stdio.h>
// #include <unistd.h>

// int main() {
//     int i;
//     char animation[] = "|/-\\";
    
//     // Loop for animation
//     for (i = 0; i < 20; ++i) {
//         printf("\r%c", animation[i % 4]);
//         fflush(stdout); // Flush stdout to ensure output is printed immediately
        
//         // Sleep for a short duration to control the speed of the animation
//         usleep(100000); // 100000 microseconds = 0.1 second
//     }
    
//     printf("\n");
//     return 0;
// }

#include <stdio.h>
#include <unistd.h> // for sleep function

int main() {
    int i;
    for (i = 1; i <= 100; i++) {
        printf("%d", i);
        fflush(stdout); // Ensure the number is immediately displayed

        sleep(1); // Sleep for 1 second

        int j;
        for (j = 0; j < (int) (sizeof(int) * 2.5); j++) { // Adjust the number of spaces based on the maximum size of an integer
            printf("\b \b"); // Move the cursor back and overwrite with spaces
            fflush(stdout); // Ensure the space is immediately displayed
        }
    }
    return 0;
}
