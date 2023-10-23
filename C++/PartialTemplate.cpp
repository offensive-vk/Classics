#include <iostream>
#include <conio.h>

// Primary template
template <typename T>
struct MyTemplate {
    static const char* name() {
        return "General case";
    }
};

// Partial specialization for pointers
template <typename T>
struct MyTemplate<T*> {
    static const char* name() {
        return "Partial specialization for pointers";
    }
};

// Full specialization for int
template <>
struct MyTemplate<int> {
    static const char* name() {
        return "Full specialization for int";
    }
};

int main() {
    MyTemplate<double> t1; // General case
    MyTemplate<double*> t2; // Partial specialization for pointers
    MyTemplate<int> t3; // Full specialization for int

    std::cout << t1.name() << std::endl;
    std::cout << t2.name() << std::endl;
    std::cout << t3.name() << std::endl;

    return 0;
}