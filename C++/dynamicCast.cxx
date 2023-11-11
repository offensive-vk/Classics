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
int main() {
    BaseClass *basePtr = new DerivedClass(); 
    DerivedClass *derivedPtr;

    derivedPtr = dynamic_cast<DerivedClass *>(basePtr);  
    if (derivedPtr) {
        derivedPtr->display(); 
    } else {
        std::cout << "Invalid type conversion.";
    }

    delete basePtr;
    return 0;
}
/* 
dynamic_cast is a type of casting operator in C++ that is used specifically for polymorphism. It safely converts pointers and references of a base class to its derived class and checks the validity of the conversion during runtime. If the conversion is not valid (i.e., the object is not of the target type), it returns a null pointer instead of producing undefined behavior. Therefore, dynamic_cast can prevent potential crashes and errors when using polymorphism.

*/