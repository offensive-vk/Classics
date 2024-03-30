/**
SFINAE (Substitution Failure Is Not An Error)
SFINAE is a principle in C++ template metaprogramming that allows the compiler to select the appropriate function or class when a specific template specialization fails during substitution. 
The term “substitution failure” refers to the process where the compiler tries to substitute template arguments into a function template or class template. 
If the substitution causes an error, the compiler won’t consider that specific specialization as a candidate and will continue searching for a valid one.
*/
#include <iostream>
#include <type_traits>

template <typename T, typename = void>
struct foo_impl {
    void operator()(T t) {
        std::cout << "Called when T is not arithmetic" << std::endl;
    }
};

template <typename T>
struct foo_impl<T, std::enable_if_t<std::is_arithmetic<T>::value>> {
    void operator()(T t) {
        std::cout << "Called when T is arithmetic" << std::endl;
    }
};

template <typename T>
void foo(T t) {
    foo_impl<T>()(t);
}

int main() {
    int a = 5;
    foo(a); // output: Called when T is arithmetic

    std::string s = "example";
    foo(s); // output: Called when T is not arithmetic
}
