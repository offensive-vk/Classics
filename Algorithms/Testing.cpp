#include<iostream>
#include<cassert>
#define FILE "Testing.cpp/*.**"

template <class T> class Test {
    std::string name;
    T x;
    Test() {/**@param NULL */}
    ~Test() { /**@default destructor. */}
    Test(T& user, std::string& name) {
        std::cout << "Params Done\n" << std::endl;
    }
};
