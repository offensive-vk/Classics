#include <iostream>
#include <windows.h>

template <typename T, size_t Capacity>
class Container {
private:
    T data[Capacity];
    size_t size;

public:
    Container() : size(0) {}

    void add(const T& item) {
        if (size < Capacity) {
            data[size++] = item;
        }
    }

    void display() {
        for (size_t i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    bool empty() const {
        return size == 0;
    }

    size_t getSize() const {
        return size;
    }
};
