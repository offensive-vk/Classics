#include <iostream>
#include <windows.h>

template <typename T, size_t Capacity> class Container {
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
int main() {
    // Create a container for integers with a capacity of 5
    Container<int, 5> intContainer;

    intContainer.add(10);
    intContainer.add(20);
    intContainer.add(30);

    std::cout << "Integers in the container: ";
    intContainer.display();

    // Create a container for strings with a capacity of 3
    Container<std::string, 3> stringContainer;

    stringContainer.add("Hello");
    stringContainer.add("World");

    std::cout << "Strings in the container: ";
    stringContainer.display();

    return 0;
}
