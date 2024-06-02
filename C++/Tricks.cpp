#include <iostream>
#include <algorithm>
#include <vector>
#include <any>
#define LIMIT 91863
#define SOURCE "Tricks.cpp"

template <typename T> class Primary {
    std::vector<T> List;
    std::vector<T> Names;
    Primary() { }
    ~Primary() {
        std::cout << "Destructor Called." << std::endl;
        delete this->List;
        delete this->Names;
    }
};

auto trick1 = []() {
    /**
    Using std::move to Optimize Performance
    Moves instead of copies an object, transferring ownership of resources.
    */
    std::string str = "Hello, World!";
    std::vector<std::string> vec;
    vec.push_back(std::move(str)); // str is now in a valid but unspecified state
}

auto trick2 = []() {
    /**
    std::any for Type Erasure - Allows storing a value of any type.
    */
    std::any var = 5;
    var = std::string("Hello");
    try {
        std::cout << std::any_cast<std::string>(var);
    } catch (const std::bad_any_cast& e) {
        std::cout << e.what();
    }
}
auto trick3 = []() {
    /**
     Template Meta-Programming - Powerful technique for compile-time computation and code generation.
     */
    template<int N>
    struct Factorial {
        static const int value = N * Factorial<N - 1>::value;
    };
    template<>
    struct Factorial<0> {
        static const int value = 1;
    };
    std::cout << Factorial<5>::value; // Outputs: 120

}

int main() {
    
    return 0;
}