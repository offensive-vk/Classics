#include <iostream>
#include <memory>
#include <vector>
using namespace std;

// Abstract Base Class (Polymorphism in action)
class Animal {
public:
    virtual void makeSound() const = 0;  // Pure virtual function
    virtual ~Animal() {}  // Virtual destructor for cleanup
};

// Derived class: Dog
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "🐶 Dog says: Woof! Woof!\n";
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "🐱 Cat says: Meow! Meow!\n";
    }
};

// Derived class: Bird
class Bird : public Animal {
public:
    void makeSound() const override {
        cout << "🐦 Bird says: Tweet! Tweet!\n";
    }
};

// Template function to add animals dynamically
template <typename T>
void addAnimal(vector<unique_ptr<Animal>>& zoo) {
    zoo.push_back(make_unique<T>());
}

int main() {
    vector<unique_ptr<Animal>> zoo; 

    cout << "Welcome to the Animal Zoo Simulator 🦁🐘!\n";

    // Using templates to add different animals
    addAnimal<Dog>(zoo);
    addAnimal<Cat>(zoo);
    addAnimal<Bird>(zoo);

    cout << "\nThe animals in the zoo are making sounds...\n";
    for (const auto& animal : zoo) {
        animal->makeSound();
    }

    return 0;
}
