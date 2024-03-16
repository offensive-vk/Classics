#include <iostream>
#include <algorithm>
#include <conio.h>

class Human {
public:
    Human(const std::string& name) : name(name) {}

    void introduce() const {
        std::cout << "Hello, my name is " << name << "." << std::endl;
    }

    virtual void greet() const {
        std::cout << "Hi, I'm a human." << std::endl;
    }

private:
    std::string name;
};

class Men : virtual public Human {
public:
    Men(const std::string& name) : Human(name) {}

    void fixThings() const {
        std::cout << "I'm fixing things." << std::endl;
    }

    void greet() const override {
        std::cout << "Hey, I'm a man." << std::endl;
    }
};

class Women : virtual public Human {
public:
    Women(const std::string& name) : Human(name) {}

    void shopping() const {
        std::cout << "I'm going shopping." << std::endl;
    }

    void greet() const override {
        std::cout << "Hi, I'm a woman." << std::endl;
    }
};

class Kid: public Human {
public:
    Kid(const std::string& name) : Human(name) { }

    void cry() const {
        std::cout << "Give me food !!" << std::endl;
    }
};

int main(int argc, char const *argv[]) {

    // Spawning Some Humans
    Human* G = new Human("G");

    Human god("Godfather");
    Men men("Male Human");
    Women women("Female Human");
    Kid kid("John");

    // Making them do work for me.
    god.greet();
    god.introduce();

    // Men
    men.introduce();
    men.fixThings();

    // Women
    women.introduce();
    women.shopping();

    // Kids
    kid.cry();

    return 0;
}
