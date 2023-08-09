#include <iostream>
#include <string>

int main() {
    int intValue;
    double doubleValue;
    std::string stringValue;

    std::cout << "Enter an integer: ";
    std::cin >> intValue;

    std::cout << "Enter a double: ";
    std::cin >> doubleValue;

    std::cout << "Enter a string: ";
    std::cin.ignore(); // Ignore the newline character in the input buffer
    std::getline(std::cin, stringValue);

    std::cout << "Integer entered: " << intValue << std::endl;
    std::cout << "Double entered: " << doubleValue << std::endl;
    std::cout << "String entered: " << stringValue << std::endl;

    return 0;
}
