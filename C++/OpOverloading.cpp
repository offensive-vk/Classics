#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    // Overloading the + operator for addition
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Overloading the - operator for subtraction
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    // Overloading the * operator for multiplication
    Complex operator*(const Complex& other) const {
        return Complex(
            real * other.real - imaginary * other.imaginary,
            real * other.imaginary + imaginary * other.real
        );
    }

    // Overloading the == operator for equality
    bool operator==(const Complex& other) const {
        return (real == other.real) && (imaginary == other.imaginary);
    }

    // Overloading the != operator for inequality
    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }

    // Overloading the << operator for custom output
    friend std::ostream& operator<<(std::ostream& os, const Complex& complex) {
        os << complex.real << " + " << complex.imaginary << "i";
        return os;
    }
};

int main() {
    // Testing operator overloading
    Complex a(3.0, 4.0);
    Complex b(1.0, -2.0);

    // Addition
    Complex sum = a + b;
    std::cout << "Sum: " << sum << std::endl;

    // Subtraction
    Complex diff = a - b;
    std::cout << "Difference: " << diff << std::endl;

    // Multiplication
    Complex product = a * b;
    std::cout << "Product: " << product << std::endl;

    // Equality and Inequality
    std::cout << "Equality: " << (a == b) << std::endl;
    std::cout << "Inequality: " << (a != b) << std::endl;

    return 0;
}
