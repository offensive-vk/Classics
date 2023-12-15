#include <iostream>
#include <algorithm>
#include <vedansh.hxx>

void print() {
    std::cout << std::endl;
}
template <typename T, typename... A> void print(T first, A... rest) {
    std::cout << first << " ";

    print(rest...);
}

int main(int argc, char** argv[]) {
    print();
    print(argc, argv);
}