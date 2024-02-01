#include <iostream>

// Define a namespace called 'Geometry' with a single function
namespace Geometry {
    double circleArea(double radius) {
        return 3.14159 * radius * radius;
    }
    inline void display () {
        std::cout << "Hello From Geometry" << std::endl;
    }
}

// Define a namespace called 'Geometry' with a class and a function
namespace GeometryExpanded {
    // Define a class inside the namespace
    class Circle {
    private:
        double radius;

    public:
        // Constructor
        Circle(double r) : radius(r) {}

        // Method to calculate the area of the circle
        double area() const {
            return 3.14159 * radius * radius;
        }
    };

    // Define a function inside the namespace
    double circleArea(double radius) {
        return 3.14159 * radius * radius;
    }

    inline void display () {
        std::cout << "Hello From GeometryExpanded" << std::endl;
    }
}

int main() {

    // Calculate and display the area of a circle using the function in the 'Geometry' namespace
    double radius = 2.5;
    std::cout << "Area of circle with radius " << radius << " is: " << Geometry::circleArea(radius) << std::endl;

    // Create an instance of the Circle class and calculate its area using the method in the 'GeometryExpanded' namespace
    GeometryExpanded::Circle circle(2.5);
    std::cout << "Area of circle with radius " << circle.area() << " is: " << circle.area() << std::endl;

    return 0;
}