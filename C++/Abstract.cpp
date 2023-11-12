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
// Concrete class Circle, derived from Shape
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementation of the pure virtual function
    double calculateArea() const override {
        return 3.14 * radius * radius;
    }

    // Override the display function
    void display() const override {
        std::cout << "Circle with radius " << radius << std::endl;
    }
};

// Concrete class Square, derived from Shape
class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    // Implementation of the pure virtual function
    double calculateArea() const override {
        return side * side;
    }

    // Override the display function
    void display() const override {
        std::cout << "Square with side length " << side << std::endl;
    }
};
int main() {
    // Creating objects of Circle and Square
    Circle circle(5.0);
    Square square(4.0);

    // Using polymorphism to call functions through base class pointers
    Shape* shape1 = &circle;
    Shape* shape2 = &square;

    // Calling virtual functions
    shape1->display();
    std::cout << "Area: " << shape1->calculateArea() << std::endl;

    shape2->display();
    std::cout << "Area: " << shape2->calculateArea() << std::endl;

    return 0;
}