#include <stdio.h>
#include <iostream>
#include <conio.h>

int main(int argc, char **argv[]) {
    int size = 0;
    std::cout << "Please Enter The Size of Array : " << std::endl;
    std::cin >> size;
    int arr[size];

    for(int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << arr << std::endl;
    return 0;
}