#include <iostream>
#include <algorithm>
#include "vedansh.hxx"

void print() {
    std::cout << std::endl;
}
template <typename Type, typename... Args> void print(Type first, Args... rest) {
    std::cout << first << " ";
    print(rest...);
}