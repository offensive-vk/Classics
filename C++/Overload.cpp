#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <memory>

#define MAX 65535;
#define MIN 1;

const char* displayX() noexcept {
    return "-X*X*X-";
}

template <class T> class Overload: public std::vector<T> {
public:
    std::vector<std::vector<T>> LONG_LIST_UINT;
    bool isOverload = false;
    bool isVector = true;
    Overload() { }
    ~Overload() { }
    Overload(bool x, bool y) {
        this->isOverload = x;
        this->isVector = y;
        char* sayX = displayX();
        std::cout << *sayX << std::endl;
    }
};

int main(int argc, char **argv){

    std::cout << ":: \t C++ Programming - OOP !! :: " << std::endl;
    std::cout << "\n\t ============================== \t\n" << std::endl;

    std::vector<std::string> res;
    std::string data = "C++ is Cool!";

    for(size_t c = 0; c <= 99; ++c) {
        res.push_back(data);
        std::cout << data << " -> " << c << " - times" << std::endl;
    } 
    std::cout << std::endl;
    std::cout << "Length of Vector: " << res.size() << std::endl;
    std::cout << "\n\t ============================== \t\n" << std::endl;

    std::unique_ptr<Overload<bool>> ptr(new Overload<bool>);
    std::cout << "Is Overloaded class? -> " << ptr->isOverload << std::endl;
    return (0);
}