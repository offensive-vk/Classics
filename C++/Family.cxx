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
class GrandParents: public Human {
    public:
    GrandParents(std::string name, int age) {
        this->age = age;
        this->name = name;
        this->gender = "Male+Female";
    }
};

int main(int argc, char const *argv[])
{
    GrandParents G("GrandParents", 80);
    return 0;
}
