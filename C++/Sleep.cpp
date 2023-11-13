#include <iostream>
#include <windows.h>

int main() {
    std::string s = "Hello, World!";
    std::cout << "Enter Your String : " << std::endl;

    std::getline(std::cin, s);

    for (char c : s) {

        std::cout << c;

        Sleep(1000);
    }
    system("cls");

    return 0;
}
