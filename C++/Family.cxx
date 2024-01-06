#include <iostream>
#include <conio.h>
#include <algorithm>

class Human {
    public:
    std::string name;
    int age;
    std::string gender;

    Human() { }
    virtual void born( ) { }
    virtual void breath( ) { }
    virtual void drink( ) { }
    virtual void eat( ) { }
    virtual void sleep( ) { }
    virtual void die() { }
};
template <typename X> class GrandParents: public Human {
    public:
    GrandParents(std::string &name, std::string &gender, int &age) {
        this->age = age;
        this->name = name;
        this->gender = gender;
    }
};