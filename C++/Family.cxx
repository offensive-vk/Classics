#include <iostream>
#include <conio.h>
#include <algorithm>

class Human {
    public:
    std::string name;
    int age;
    std::string gender;

    Human() { }
    virtual void die() { }
    virtual void sleep( ) { }

};
template <typename X> class GrandParents {
    public:

};