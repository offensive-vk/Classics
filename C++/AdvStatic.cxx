#include <iostream>

class Example {
public:
    // Static variable shared by all instances of the class
    static int staticVariable;

    // Constructor to initialize non-static member variable
    Example(int value) : nonStaticVariable(value) {}

    // Static method
    static void staticMethod() {
        std::cout << "Static method called. Static variable: " << staticVariable << std::endl;
    }

    // Non-static method
    void nonStaticMethod() {
        std::cout << "Non-static method called. Non-static variable: " << nonStaticVariable << std::endl;
    }

    // Virtual method
    virtual void virtualMethod() {
        std::cout << "Virtual method called." << std::endl;
    }
    
    // Static method using static variable
    static void modifyStaticVariable(int newValue) {
        staticVariable = newValue;
    }

private:
    // Non-static member variable
    int nonStaticVariable;
};

// Initializing static variable
int Example::staticVariable = 0;

int main() {
    // Create instances of the Example class
    Example obj1(1);
    Example obj2(2);

    // Access static variable through class name
    std::cout << "Initial value of static variable: " << Example::staticVariable << std::endl;

    // Modify static variable using static method
    Example::modifyStaticVariable(10);

    // Access static variable through class instance
    std::cout << "Modified value of static variable: " << obj1.staticVariable << std::endl;

    // Call static method
    Example::staticMethod();

    // Call non-static method
    obj1.nonStaticMethod();

    // Call virtual method
    obj1.virtualMethod();

    // Demonstrate polymorphism using pointers and virtual methods
    Example* ptr = &obj1;
    ptr->virtualMethod();  // Calls the virtual method of the actual object type

    return 0;
}
