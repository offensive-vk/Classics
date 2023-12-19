/**
std::unique_ptr is a smart pointer provided by the C++ Standard Library. It is a template class that is used for managing single objects or arrays.

unique_ptr works on the concept of exclusive ownership - meaning only one unique_ptr is allowed to own an object at a time. This ownership can be transferred or moved, but it cannot be shared or copied.

*/
#include <iostream>
#include <memory>
struct MyDeleter {
    void operator()(int* ptr) {
        std::cout << "Custom Deleter: Deleting pointer" << std::endl;
        delete ptr;
    }
};
int main() {

    // Initialize with pointer to a new integer
    std::unique_ptr<int> p1(new int(5)); 
    std::unique_ptr<int> p2 = std::make_unique<int>(10); // Preferred method (C++14 onwards)

    std::cout << *p1 << ", " << *p2 << std::endl;

    std::unique_ptr<int, MyDeleter> p1(new int(5), MyDeleter());
    return 0;
}
