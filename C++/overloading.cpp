#include <iostream>

// Function to calculate the area of a rectangle
double area(double length, double width) {
    return length * width;
}

// Function to calculate the area of a circle
double area(double radius) {
    return 3.14 * radius * radius;
}

// Function to calculate the volume of a box
double volume(double length, double width, double height) {
    return length * width * height;
}

int main() {
    double rectangleLength = 5.0;
    double rectangleWidth = 3.0;
    double circleRadius = 2.5;
    double boxLength = 4.0;
    double boxWidth = 2.0;
    double boxHeight = 3.0;

    // Calculate and display the area of a rectangle
    std::cout << "Area of rectangle: " << area(rectangleLength, rectangleWidth) << std::endl;

    // Calculate and display the area of a circle
    std::cout << "Area of circle: " << area(circleRadius) << std::endl;

    // Calculate and display the volume of a box
    std::cout << "Volume of box: " << volume(boxLength, boxWidth, boxHeight) << std::endl;

    return 0;
}
