#include <iostream>
#include <conio.h>

class MyClass {
    public:
        int *data = new int[100];
        // Constructor
        MyClass() {
            std::cout << "Constructor called." << std::endl;
        }
        // Destructor
        ~MyClass() {
            std::cout << "Destructor called." << std::endl;
            delete this->data;
        }
    };

int main() {
    std::cout << "Creating an object..." << std::endl;
    MyClass obj; // Constructor called when object is created

    std::cout << "Exiting the main function..." << std::endl;
    return 0; // Destructor called when object goes out of scope
}
