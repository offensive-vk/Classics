#include <iostream>

// Primary template
template <typename T>
class Printer {
public:
    void print(T value) {
        std::cout << "Generic printer: " << value << std::endl;
    }
};

// Full specialization for `const char*`
template <>
class Printer<const char*> {
public:
    void print(const char* value) {
        std::cout << "Specialized printer for const char*: " << value << std::endl;
    }
};

// Partial specialization for pointer types
template <typename T>
class Printer<T*> {
public:
    void print(T* value) {
        std::cout << "Specialized printer for pointers: " << *value << std::endl;
    }
};

int main() {
    Printer<int> intPrinter;
    intPrinter.print(123);

    Printer<const char*> strPrinter;
    strPrinter.print("Hello, World!");

    int x = 456;
    Printer<int*> ptrPrinter;
    ptrPrinter.print(&x);

    return 0;
}
