#include<iostream>

class Base
{
public:
    virtual void print()
    {
        std::cout << "Base::print()" << std::endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        std::cout << "Derived::print()" << std::endl;
    }
};

int main()
{
    Base *b = new Derived();
    b->print();

    return 0;
}
