#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void clear_screen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    int secret_number, guess, attempts = 0;
    char player_name[50];
    char play_again;

    // Seed random number generator
    srand(time(NULL));

    printf("Welcome to the MYSTERIOUS Guessing Game!\n");
    printf("Enter your name, brave soul: ");
    scanf("%s", player_name);

    do {
        clear_screen();
        printf("Alright %s, I have chosen a number between 1 and 100.\n", player_name);
        printf("Can you guess it? Let's see!\n");

        secret_number = (rand() % 100) + 1;
        attempts = 0;

        while (1) {
            printf("\nEnter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < secret_number) {
                printf("Too low! Try again.");
            } else if (guess > secret_number) {
                printf("Too high! Try again.");
            } else {
                printf("Congratulations, %s! You've guessed it in %d attempts!\n", player_name, attempts);
                break;
            }
        }

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &play_again);
    } while (play_again == 'y' || play_again == 'Y');

    printf("\nThanks for playing, %s! See you next time.\n", player_name);

    return 0;
}
