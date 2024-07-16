#include <iostream>

// Primary template
template <int N>
struct Factorial {
    static const int value = N * Factorial<N - 1>::value;
};

// Base case specialization
template <>
struct Factorial<0> {
    static const int value = 1;
};

int main() {
    // Compile-time computation of factorial
    std::cout << "Factorial of 5: " << Factorial<5>::value << std::endl;
    std::cout << "Factorial of 10: " << Factorial<10>::value << std::endl;

    return 0;
}
