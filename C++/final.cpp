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
// Another base class with a 'final' specifier to prevent further inheritance
class FinalBase final {
public:
    void someFunction() {
        std::cout << "FinalBase::someFunction()" << std::endl;
    }
};

// Attempting to derive from 'FinalBase' will result in a compilation error.
// class InvalidDerived : public FinalBase {}; // Error: 'FinalBase' is marked 'final'

int main() {
    Base base;
    Derived2 derived2;

    base.foo(); // Calls Base::foo()
    base.nonVirtualFunction(); // Calls Base::nonVirtualFunction()

    derived2.foo(); // Calls Base::foo() (cannot override)
    derived2.bar(); // Calls Derived2::bar()
    
    FinalBase finalBase;
    finalBase.someFunction(); // Calls FinalBase::someFunction()

    return 0;
}