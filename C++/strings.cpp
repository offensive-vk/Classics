#include <iostream>
#include <string>

int main() {

    std::string greeting = "Hello, ";
    std::string name = "Alice";
    std::string message;

    // Concatenation
    message = greeting + name;
    std::cout << "Concatenated message: " << message << std::endl;

    // String length
    std::cout << "Length of message: " << message.length() << std::endl;

    // Accessing characters
    std::cout << "First character: " << message[0] << std::endl;
    std::cout << "Last character: " << message[message.length() - 1] << std::endl;

    // Substring
    std::string substring = message.substr(7, 5);
    std::cout << "Substring: " << substring << std::endl;

    // String comparison
    std::string str1 = "apple";
    std::string str2 = "banana";
    int result = str1.compare(str2);
    if (result == 0) {
        std::cout << "Strings are equal." << std::endl;
    } else if (result < 0) {
        std::cout << "str1 comes before str2." << std::endl;
    } else {
        std::cout << "str1 comes after str2." << std::endl;
    }
    // End
    return 0;
}
