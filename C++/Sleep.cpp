#include <iostream>
#include <windows.h>

int main() {
    std::string s = "Hello, World!";
    
    // std::cin >> s;
    std::getline(std::cin, s);

    for (char c : s) {
        std::cout << c;

        Sleep(1000);
        system("cls");
    }

    return 0;
}
