#include <iostream>
#include <string>
#include <chrono>
#include <unistd.h>
#include <thread>

void print(const std::string& data) {
    std::string printable = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ \t\n\r\v\f";
    std::string temp = "";

    for (char c : data) {
        for (char i : printable) {
            if (i == c || c == ' ') {
                std::this_thread::sleep_for(std::chrono::milliseconds(2));
                std::cout << temp + i << std::endl;
                temp += c;
                break;
            }
            else {
                std::this_thread::sleep_for(std::chrono::milliseconds(20));
                std::cout << temp + i << std::endl;
            }
        }
    }
}

int main() {
    std::string text = "Hello, Madhav";
    print(text);
    return 0;
}
