#include <iostream>

// Base class with a virtual function marked as 'final'
class Base {
public:
    // A virtual function marked as 'final' cannot be overridden in derived classes.
    virtual void foo() final {
        std::cout << "Base::foo()" << std::endl;
    }

    void nonVirtualFunction() {
        std::cout << "Base::nonVirtualFunction()" << std::endl;
    }
};
// Derived class attempting to override a 'final' function
class Derived1 : public Base {
public:
    // Attempting to override 'foo' will result in a compilation error.
    // void foo() override { /* ... */ } // Error: 'foo' in 'Derived1' cannot override final 'foo' in 'Base'
};

// Another derived class with a different function
class Derived2 : public Base {
public:
    void bar() {
        std::cout << "Derived2::bar()" << std::endl;
    }
};
