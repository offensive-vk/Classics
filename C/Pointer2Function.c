#include <stdio.h>
#include <stdlib.h>

// Comparison function type definition
typedef int (*CompareFunction)(const void *, const void *);

// Generic sorting function
void sortData(void *data, size_t numElements, size_t elementSize, CompareFunction compare) {
    qsort(data, numElements, elementSize, compare);
}

// Comparison functions for different criteria
int compareByAge(const void *a, const void *b) {
    // Compare by age
    return ((Person *)a)->age - ((Person *)b)->age;
}

int compareByName(const void *a, const void *b) {
    // Compare by name
    return strcmp(((Person *)a)->name, ((Person *)b)->name);
}

// Example structure representing a person
typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person people[] = {
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 22},
    };

    // Use a pointer to a function to sort by age
    sortData(people, sizeof(people) / sizeof(people[0]), sizeof(Person), compareByAge);

    // Display sorted data
    for (int i = 0; i < sizeof(people) / sizeof(people[0]); ++i) {
        printf("%s, %d\n", people[i].name, people[i].age);
    }

    // Use a pointer to a function to sort by name
    sortData(people, sizeof(people) / sizeof(people[0]), sizeof(Person), compareByName);

    // Display sorted data
    for (int i = 0; i < sizeof(people) / sizeof(people[0]); ++i) {
        printf("%s, %d\n", people[i].name, people[i].age);
    }

    return 0;
}