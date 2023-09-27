#include <iostream>
#include <cmath>

// Define an abstract class 'Shape' with common properties and a virtual method
class Shape {
protected:
    std::string color;

public:
    Shape(const std::string& color) : color(color) {}

    // Virtual method for calculating area
    virtual double calculateArea() const = 0;

    // Getters and setters
    std::string getColor() const {
        return color;
    }

    void setColor(const std::string& newColor) {
        color = newColor;
    }
};

// Define a concrete class 'Circle' that inherits from 'Shape'
class Circle : public Shape {
private:
    double radius;

public:
    Circle(const std::string& color, double radius) : Shape(color), radius(radius) {}

    double calculateArea() const override {
        return M_PI * radius * radius;
    }

    // Additional method specific to circles
    double getRadius() const {
        return radius;
    }
};

// Define another concrete class 'Rectangle' that inherits from 'Shape'
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(const std::string& color, double width, double height) : Shape(color), width(width), height(height) {}

    double calculateArea() const override {
        return width * height;
    }

    // Additional methods specific to rectangles
    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }
};

int main() {
    // Usage of the classes
    Circle circle("Red", 5);
    Rectangle rectangle("Blue", 4, 6);

    std::cout << "Circle - Color: " << circle.getColor() << ", Radius: " << circle.getRadius() << ", Area: " << circle.calculateArea() << std::endl;
    std::cout << "Rectangle - Color: " << rectangle.getColor() << ", Width: " << rectangle.getWidth() << ", Height: " << rectangle.getHeight() << ", Area: " << rectangle.calculateArea() << std::endl;

    return 0;
}