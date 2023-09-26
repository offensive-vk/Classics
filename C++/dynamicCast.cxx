#include <iostream>
#include <conio.h>
class BaseClass {
    public:
    virtual void display() {
        std::cout << "BaseClass" << std::endl;
    }
};

class DerivedClass : public BaseClass {
    public:
    void display() {
        std::cout << "DerivedClass" << std::endl;
    }
};
