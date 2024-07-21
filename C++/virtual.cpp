#include <iostream>
#include <conio.h>
class Animal {
public:
    virtual void speak() = 0; // pure virtual function
};

class Dog : public Animal {
public:
    void speak() override {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    Animal *a = new Dog();
    a->speak();

    a = new Cat();
    a->speak();

    return 0;
}