#include <iostream>
#include <conio.h>
#include <algorithm>

class Human {
    public:
    std::string name;
    int age;
    std::string gender;
    bool life = true;

    Human() { }
    virtual void born( ) { }
    virtual void breath( ) { }
    virtual void drink( ) { }
    virtual void eat( ) { }
    virtual void speak() { }
    virtual void sleep( ) { }
    virtual void die() { }

    protected:
    void getDetails() const {
        std::cout << "Human Name" << this->name << std::endl;
        std::cout << "Human Age" << this->age << std::endl;
        std::cout << "Human Gender" << this->gender << std::endl;
        std::cout << "Is Living? " << this->life << std::endl;
    }
};
class GrandParents: public Human {
    public:
    GrandParents(std::string name, int age) {
        this->age = age;
        this->name = name;
        this->gender = "Male+Female";
        std::cout << "GrandParents with name : " << this->name << "has been spawned." << std::endl;
        std::cout << "GrandParents Created" << std::endl;
    }
    void spendTime(Human &h) { 
        std::cout << "Spending time with my kids.." << std::endl;
    }
    virtual inline void die( ) override {
        std::cout << "Goodbye Kids ! I Am Dying." << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    GrandParents G("GrandParents", 80);
    
    G.die();
    return 0;
}
