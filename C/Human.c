#include <stdio.h>
#include <string.h>

// Define Human struct
typedef struct {
    const char* name;
} Human;

// Human constructor
void Human_init(Human* this, const char* name) {
    this->name = name;
}

// Human introduce function
void Human_introduce(const Human* this) {
    printf("Hello, my name is %s.\n", this->name);
}

// Human greet function
void Human_greet(const Human* this) {
    printf("Hi, I'm a human.\n");
}

// Define Men struct inheriting from Human
typedef struct {
    Human super;
} Men;

// Men constructor
void Men_init(Men* this, const char* name) {
    Human_init(&this->super, name);
}

// Men fixThings function
void Men_fixThings(const Men* this) {
    printf("I'm fixing things.\n");
}

// Men greet function
void Men_greet(const Men* this) {
    printf("Hey, I'm a man.\n");
}

// Define Women struct inheriting from Human
typedef struct {
    Human super;
} Women;

// Women constructor
void Women_init(Women* this, const char* name) {
    Human_init(&this->super, name);
}

// Women shopping function
void Women_shopping(const Women* this) {
    printf("I'm going shopping.\n");
}

// Women greet function
void Women_greet(const Women* this) {
    printf("Hi, I'm a woman.\n");
}

int main() {
    Men john;
    Women emily;

    Men_init(&john, "John");
    Women_init(&emily, "Rao");

    Human_introduce((const Human*)&john);
    Men_greet(&john);
    Men_fixThings(&john);

    Human_introduce((const Human*)&emily);
    Women_greet(&emily);
    Women_shopping(&emily);

    return 0;
}
