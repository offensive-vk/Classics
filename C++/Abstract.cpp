#include <iostream>

// Abstract class
class Shape {
public:
    // Pure virtual function (abstract function)
    virtual double calculateArea() const = 0;

    // Virtual function with a default implementation
    virtual void display() const {
        std::cout << "This is a shape." << std::endl;
    }

    // Destructor (virtual to ensure proper cleanup in derived classes)
    virtual ~Shape() {}
};
