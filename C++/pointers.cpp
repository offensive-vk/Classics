#include<iostream>
#include<conio.h>

int main() {
    int num = 10;
    int* ptr = &num;
    int* ptx = new int;

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value of ptr: " << ptr << std::endl;
    std::cout << "Value pointed by ptr: " << *ptr << std::endl;

    *ptx = 999;
    std::cout << "Value hold by ptx pointer is " << *ptx << std::endl;
    delete ptr;
    
    return 0;
}

