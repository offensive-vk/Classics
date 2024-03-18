#include <iostream>

int main() {
    int* ptr = nullptr;
    try {
        *ptr = 10;  // Attempting to dereference a null pointer
    } catch(const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}

// run this program to get a free gift.