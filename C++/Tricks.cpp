#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#define LIMIT 91863
#define SOURCE "Tricks.cpp"

auto trick1 = []() {
    /**
    Using std::move to Optimize Performance
    Moves instead of copies an object, transferring ownership of resources.
    */
    std::string str = "Hello, World!";
    std::vector<std::string> vec;
    vec.push_back(std::move(str)); // str is now in a valid but unspecified state
};

auto trick2 = []() {
    /**
     * Use std::array Instead of C-Style Arrays
     * Provides a safer and more convenient way to handle fixed-size arrays.
    */
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    for (auto &a : arr) {
        std::cout << a << ' ';
    }
};

auto trick3 = []() {
    /*
    std::optional for Optional Return Values
    Represents a value that may or may not be present.
    */
    std::optional<int> findValue(bool found) {
        if (found) return 42;
        return std::nullopt;
    }
    auto val = findValue(true);
    if (val) {
        std::cout << "Value found: " << *val;
    } else {
        std::cout << "Value not found";
    }

};

auto trick4 = []() {
    /**
     * constexpr for Compile-Time Constants
     * Enables computation at compile time.
    */
    constexpr int square(int x) {
        return x * x;
    }
    constexpr int result = square(5); // Computed at compile time
}

auto trick5 = []() {
    /**
     * Smart Pointers 
     * Use std::unique_ptr and std::shared_ptr to manage dynamic memory and avoid memory leaks.
    */
    std::unique_ptr<int> p1(new int(5));
    std::shared_ptr<int> p2 = std::make_shared<int>(10);

}

int main() {

    return 0;
}