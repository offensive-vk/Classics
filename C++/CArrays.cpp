#include<iostream>
#include<conio.h>
const int SIZE = 5;

int main() {

    // datatype arrayName [size];
    int numbers[SIZE]; 

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    std::cout << "Array Elements Are: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    numbers[2] = 35;
    numbers[4] += 10;

        std::cout << "Modified array elements: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}