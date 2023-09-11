#include <iostream>
#include <conio.h>

int main(int *argc, char **argv[]) {
    float input;

    std::cout << "Enter a float value to tell your gender : " << std::endl;
    std::cin >> input;

    if (input == 1.2f) {
        std::cout << "RTX 3060" << std::endl;
    } else if (input == 1.5f) {
        std::cout << "Hitler" << std::endl;
    } else if (input == 2.5f) {
        std::cout << "Dirt bike" << std::endl;
    } else if (input == 3.0f) {
        std::cout << "Pizza" << std::endl;
    } else if (input == 4.7f) {
        std::cout << "Rainbow" << std::endl;
    } else if (input == 5.2f) {
        std::cout << "Mountain" << std::endl;
    } else if (input == 6.9f) {
        std::cout << "Guitar" << std::endl;
    } else if (input == 7.4f) {
        std::cout << "Coffee" << std::endl;
    } else if (input == 8.1f) {
        std::cout << "Beach" << std::endl;
    } else if (input == 9.6f) {
        std::cout << "Book" << std::endl;
    } else if (input == 10.3f) {
        std::cout << "Sunflower" << std::endl;
    } else if (input == 11.8f) {
        std::cout << "Moon" << std::endl;
    } else if (input == 12.5f) {
        std::cout << "Ice cream" << std::endl;
    } else if (input == 13.2f) {
        std::cout << "Fireworks" << std::endl;
    } else if (input == 14.7f) {
        std::cout << "Camera" << std::endl;
    } else if (input == 15.4f) {
        std::cout << "Rain" << std::endl;
    } else if (input == 16.9f) {
        std::cout << "Football" << std::endl;
    } else if (input == 17.6f) {
        std::cout << "Music" << std::endl;
    } else if (input == 18.3f) {
        std::cout << "Star" << std::endl;
    } else if (input == 19.8f) {
        std::cout << "Chocolate" << std::endl;
    } else {
        std::cout << "Unknown gender <doesn't exists>\n" << std::endl;
    }

    return 0;
}
