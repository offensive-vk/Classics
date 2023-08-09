#include <iostream>
#include <conio.h>

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
