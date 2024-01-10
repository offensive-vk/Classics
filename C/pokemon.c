#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>


// Function to simulate a delay in seconds
void delay(int seconds) {
    sleep(seconds);
}

// Define the structure for a Pokemon
typedef struct {
    char name[20];
    int level;
    int health;
    int attack;
    int defense;
} Pokemon;

// Function to initialize a Pokemon
void initializePokemon(Pokemon *pokemon, const char *name, int level, int health, int attack, int defense) {
    strcpy(pokemon->name, name);
    pokemon->level = level;
    pokemon->health = health;
    pokemon->attack = attack;
    pokemon->defense = defense;
}

// Function to display Pokemon information
void displayPokemon(const Pokemon *pokemon) {
    printf("Name: %s\n", pokemon->name);
    printf("Level: %d\n", pokemon->level);
    printf("Health: %d\n", pokemon->health);
    printf("Attack: %d\n", pokemon->attack);
    printf("Defense: %d\n", pokemon->defense);
    printf("\n");
}

// Function for a Pokemon battle
void battle(Pokemon *pokemon1, Pokemon *pokemon2) {
    // Simulate a simple battle
    int damage = pokemon1->attack - pokemon2->defense;
    if (damage < 0) {
        damage = 0; // No negative damage
    }

    // Inflict damage on the opponent
    pokemon2->health -= damage;

    // Display battle information
    printf("%s attacked %s and dealt %d damage!\n", pokemon1->name, pokemon2->name, damage);
    printf("%s's health: %d\n", pokemon2->name, pokemon2->health);

    // Check if the opponent is defeated
    if (pokemon2->health <= 0) {
        printf("%s fainted!\n", pokemon2->name);
    }
}

int main() {
    srand(time(NULL)); // Seed for randomization

    // Create two Pokemon
    Pokemon pikachu, charmander;
    initializePokemon(&pikachu, "Pikachu", 10, 50, 20, 15);
    initializePokemon(&charmander, "Charmander", 8, 45, 18, 12);

    // Display Pokemon information
    printf("Initial Pokemon Information:\n");
    displayPokemon(&pikachu);
    delay(1); // Introduce a delay for better visualization
    displayPokemon(&charmander);
    delay(1); // Introduce a delay for better visualization

    // Simulate a battle between the two Pokemon
    printf("Battle Begins!\n");
    while (pikachu.health > 0 && charmander.health > 0) {
        // Randomly decide which Pokemon attacks first
        if (rand() % 2 == 0) {
            battle(&pikachu, &charmander);
            delay(1); // Introduce a delay for better visualization
            if (charmander.health > 0) {
                battle(&charmander, &pikachu);
                delay(1); // Introduce a delay for better visualization
            }
        } else {
            battle(&charmander, &pikachu);
            delay(1); // Introduce a delay for better visualization
            if (pikachu.health > 0) {
                battle(&pikachu, &charmander);
                delay(1); // Introduce a delay for better visualization
            }
        }
    }

    // Display the result of the battle
    delay(1); // Introduce a delay for better visualization
    if (pikachu.health <= 0) {
        printf("Pikachu fainted. Charmander wins!\n");
    } else {
        printf("Charmander fainted. Pikachu wins!\n");
    }

    return 0;
}
