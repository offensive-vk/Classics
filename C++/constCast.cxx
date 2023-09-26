#include <iostream>
void modifyVariable(int* ptr) {
    *ptr = 42;
}

int main() {
    const int original_value = 10;
    int* non_const_value_ptr = const_cast<int*>(&original_value);
    std::cout << "Original value: " << original_value << std::endl;

    modifyVariable(non_const_value_ptr);
    std::cout << "Modified value: " << *non_const_value_ptr << std::endl;

    return 0;
}
/* 
const_cast is a type of casting in C++ that allows you to remove or add constness to a variable. In other words, it enables you to modify a const or volatile object, or change a pointer or reference to a const or volatile type. This is useful in certain scenarios when you need to pass a const variable as an argument or when a function parameter requires a non-const type, but you want to make sure the variable remains constant throughout the code.
*/