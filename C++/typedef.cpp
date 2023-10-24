#include <iostream>
#include <conio.h>
// Define a custom data type using typedef
typedef int MyInt;
typedef std::string string;

int main() {
    MyInt x = 42;
    MyInt y = 10;

    string name = "Unknown";
    
    MyInt sum = x + y;
    MyInt product = x * y;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "x + y = " << sum << std::endl;
    std::cout << "x * y = " << product << std::endl;

    std::cout << "My Name is " << name << std::endl;
    return 0;
}
