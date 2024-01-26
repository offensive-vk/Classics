#include <iostream>
#include <stdio.h>
template <typename T>
void printData(const T& data) {
    std::cout << "General template: " << data << std::endl;
}

template <> void printData(const char* const & data) {
    std::cout << "Specialized template for const char*: " << data << std::endl;
}

int main() {
    int a = 5;
    const char* str = "Hello, world!";
    printData(a);
    printData(str);
}

/**
 * Full template specialization in C++ refers to the process of providing a specialized implementation of a template for a specific set of template arguments. Unlike partial template specialization, where only certain template parameters are specialized, full template specialization involves providing a complete, specialized implementation for all template parameters.
*/