#include <iostream>
#include <conio.h>

class OuterClass {
private:
    int outerData;

public:
    OuterClass(int data) : outerData(data) {}

    // Inner class (Class Nesting)
    class InnerClass {
    private:
        int innerData;

    public:
        InnerClass(int data) : innerData(data) {}

        void display() {
            std::cout << "Inner class data: " << innerData << std::endl;
        }
    };

    void display() {
        std::cout << "Outer class data: " << outerData << std::endl;
    }
};

// Interface (Abstract Class) Nesting
class Shape {
public:
    virtual double area() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area() const override {
        return side * side;
    }
};

int main() {

    // Class Nesting - class within a class.
    OuterClass outerObj(10);
    OuterClass::InnerClass innerObj(5);

    outerObj.display();
    innerObj.display();

    Circle circle(3.0);
    Square square(4.0);

    Shape* shape1 = &circle;
    Shape* shape2 = &square;

    std::cout << "Circle area: " << shape1->area() << std::endl;
    std::cout << "Square area: " << shape2->area() << std::endl;

    return 0;
}
