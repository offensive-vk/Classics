#include <stdio.h>
#include <iostream>
#include <conio.h>

int main(int argc, char **argv[]) {
    int size = 0;
    std::cout << "Please Enter The Size of Array : " << std::endl;
    std::cin >> size;
    int arr[size];

    for(int i = 0; i < size; i++) {
        std::cout << "Enter The Element At Index : " << i << std::endl;
        std::cin >> arr[i];
    }

    std::cout << "\n==================\n" << std::endl;
    std::cout << "Array Elements After Sorting : \n" << std::endl;
    for(int val : arr) {
        std::cout << val << std::endl;
    }
    return 0;
}
long int Permute(int array[]) {
    int result[INT_MAX][INT_MAX];

    // if () {

    // }
    // DO it
}