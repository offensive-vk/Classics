#include<iostream>
#include<conio.h>

int main(void) {
    int size = 5;
    int num = 10;
    int* ptr = &num;
    int* ptx = new int; 
    int* arr[size];
    *arr[0] = 141;
    *arr[1] = 105;

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value of ptr: " << ptr << std::endl;
    std::cout << "Value pointed by ptr: " << *ptr << std::endl;

    *ptx = 999;
    std::cout << "Value hold by ptx pointer is " << *ptx << std::endl;
    delete ptr;
    
    std::cout << "Array Pointer [0] = " << arr[0] << std::endl;
    std::cout << "Array Pointer [1] = " << arr[1] << std::endl;

    return 0;
}
/**
 * A pointer in C++ is a variable that holds the memory address of another variable. Pointers are used to store the memory address of variables, arrays, functions, or other pointers. 
*/
