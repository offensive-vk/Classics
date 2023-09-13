#include <iostream>
#include <conio.h>
#include <windows.h>

int main(int argc, char* argv[]) {
    float input;
    std::cout << "-> :: Please Enter A Floating Value from : 1.0 to 20.0 :: \n " << std::endl;
    std::cout << "What do you think? : ";
    std::cin >> input;

    if (input >= 1.0f && input < 1.2f) {
        std::cout << "Human" << std::endl;
    } else if (input >= 1.2f && input < 1.5f) {
        std::cout << "RTX 3060" << std::endl;
    } else if (input >= 1.5f && input < 2.5f) {
        std::cout << "Hitler" << std::endl;
    } else if (input >= 2.5f && input < 3.0f) {
        std::cout << "Dirt bike" << std::endl;
    } else if (input >= 3.0f && input < 4.7f) {
        std::cout << "Pizza" << std::endl;
    } else if (input >= 4.7f && input < 5.2f) {
        std::cout << "Rainbow" << std::endl;
    } else if (input >= 5.2f && input < 6.9f) {
        std::cout << "Mountain" << std::endl;
    } else if (input >= 6.9f && input < 7.4f) {
        std::cout << "Guitar" << std::endl;
    } else if (input >= 7.4f && input < 8.1f) {
        std::cout << "Coffee" << std::endl;
    } else if (input >= 8.1f && input < 9.6f) {
        std::cout << "Beach" << std::endl;
    } else if (input >= 9.6f && input < 10.3f) {
        std::cout << "Book" << std::endl;
    } else if (input >= 10.3f && input < 11.8f) {
        std::cout << "Sunflower" << std::endl;
    } else if (input >= 11.8f && input < 12.5f) {
        std::cout << "Moon" << std::endl;
    } else if (input >= 12.5f && input < 13.2f) {
        std::cout << "Ice cream" << std::endl;
    } else if (input >= 13.2f && input < 14.7f) {
        std::cout << "Fireworks" << std::endl;
    } else if (input >= 14.7f && input < 15.4f) {
        std::cout << "Camera" << std::endl;
    } else if (input >= 15.4f && input < 16.9f) {
        std::cout << "Rain" << std::endl;
    } else if (input >= 16.9f && input < 17.6f) {
        std::cout << "Football" << std::endl;
    } else if (input >= 17.6f && input < 18.3f) {
        std::cout << "Music" << std::endl;
    } else if (input >= 18.3f && input < 19.8f) {
        std::cout << "Star" << std::endl;
    } else if (input >= 19.8f && input <= 20.0f) {
        std::cout << "Chocolate" << std::endl;
    } else {
        std::cout << "Undefined " << std::endl;
    }

    return 0;
}
