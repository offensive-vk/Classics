#include <iostream>

// First namespace
namespace FirstNamespace {
    void display() {
        std::cout << "Hello from FirstNamespace!" << std::endl;
    }
}

// Second namespace
namespace SecondNamespace {
    void display() {
        std::cout << "Hello from SecondNamespace!" << std::endl;
    }
}

int main() {
    // Calling functions from different namespaces
    FirstNamespace::display();
    SecondNamespace::display();

    return 0;
}
