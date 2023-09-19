#include <iostream>

class MyClass {
public:
    static int x;

    static void display() {
        std::cout << "Static x: " << x << std::endl;
    }
};

int MyClass::x = 10;

int main() {
    MyClass::display(); 

    MyClass::x = 20; 

    MyClass obj1;
    MyClass obj2;

    std::cout << "Static x (obj1): " << obj1.x << std::endl;
    std::cout << "Static x (obj2): " << obj2.x << std::endl;

    return 0;
}
