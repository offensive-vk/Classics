#include <iostream>
#include <complex>

int main() {
    // Define two complex numbers
    std::complex<double> z1(3.0, 4.0); // 3 + 4i
    std::complex<double> z2(-1.0, 2.0); // -1 + 2i

    // Basic operations
    std::complex<double> addition = z1 + z2;
    std::complex<double> subtraction = z1 - z2;
    std::complex<double> multiplication = z1 * z2;
    std::complex<double> division = z1 / z2;
    std::complex<double> conjugate = std::conj(z1); // Conjugate of z1

    // Display the results
    std::cout << "z1: " << z1 << std::endl;
    std::cout << "z2: " << z2 << std::endl;
    std::cout << "Addition: " << addition << std::endl;
    std::cout << "Subtraction: " << subtraction << std::endl;
    std::cout << "Multiplication: " << multiplication << std::endl;
    std::cout << "Division: " << division << std::endl;
    std::cout << "Conjugate of z1: " << conjugate << std::endl;

    return 0;
}
