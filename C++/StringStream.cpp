#include <sstream>
#include <iostream>

int main() {
    std::stringstream ss;
    ss << "123 456";
    int a, b;
    ss >> a >> b;
    std::cout << a << " " << b << std::endl;
    return 0;
}
