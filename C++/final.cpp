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

