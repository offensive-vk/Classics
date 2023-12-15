#include <iostream>
#include <conio.h>

template <class T> class Parent {
    static bool isParent;
    static int id;
    static void displayStuff() {
        std::cout << "IsParent? : " << Parent::isParent << std::endl;
    }
};
class MyClass {
public:
    static int staticVar;

    static void staticMethod() {
        std::cout << "Static method called." << std::endl;
    }
};
int MyClass::staticVar = 0;

int main() {

    MyClass::staticVar = 42;
    std::cout << "Static variable value: " << MyClass::staticVar << std::endl;
    MyClass::staticMethod();
    return 0;

}
