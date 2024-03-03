#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Initialize random seed
    srand(time(0));

    // Generate random number between 1 and 100
    number = rand() % 100 + 1;

    printf("Welcome to the Guessing Game!\n");
    printf("I have picked a number between 1 and 100. Try to guess it.\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts!\n", number, attempts);
        }
    } while (guess != number);

    return 0;
}
