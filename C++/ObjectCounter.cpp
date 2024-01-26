#include <iostream>

class MyClass {
private:
    static int count; // Static member variable to count the number of objects

public:
    MyClass() {
        count++; // Increment count when an object is created
    }

    ~MyClass() {
        count--; // Decrement count when an object is destroyed
    }

    static int getCount() {
        return count; // Return the count of objects
    }
};

// Initialize static member variable outside the class definition
int MyClass::count = 0;

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    std::cout << "Number of objects created: " << MyClass::getCount() << std::endl;

    MyClass obj4;
    MyClass obj5;

    std::cout << "Number of objects created: " << MyClass::getCount() << std::endl;

    return 0;
}
