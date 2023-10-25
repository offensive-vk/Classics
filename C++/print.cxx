#include <iostream>
#include <algorithm>

void print() {
    std::cout << std::endl;
}

template <typename T, typename... Args> void print(T first, Args... rest) {
    std::cout << first << " ";
    print(rest...);
}

int main() {
    print(1, "Two", 3.0);
    print(9005464*646352/5);
    return 0;
}
