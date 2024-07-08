#include <stdio.h>
#include <string.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    const char secretWord[] = "Cprogramming";
    char guess[50];
    int attempts = 5;
    int won = 0;

    printf("Welcome to the Guessing Game!\n");
    printf("You have %d attempts to guess the secret word.\n", attempts);

    while (attempts > 0) {
        printf("\nEnter your guess: ");
        fgets(guess, 50, stdin);
        guess[strcspn(guess, "\n")] = '\0';  // Remove the newline character

        if (strcmp(guess, secretWord) == 0) {
            printf("Congratulations! You've guessed the secret word.\n");
            won = 1;
            break;
        } else {
            attempts--;
            printf("Incorrect guess. You have %d attempts left.\n", attempts);
        }
    }

    if (!won) {
        printf("\nSorry, you've run out of attempts. The secret word was '%s'.\n", secretWord);
    }

    return 0;
}
