#include <iostream>
#include <string>
#include <algorithm>

int main() {
    string input;
    std::cout << "Enter a string to reverse: ";
    getline(cin, input);
    std::reverse(input.begin(), input.end());

    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}