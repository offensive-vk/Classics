#include <iostream>
#include <vector>

// Template class for a generic stack
template <typename T> class Stack {
private:
    std::vector<T> data;

public:
    void push(const T& item) {
        data.push_back(item);
    }

    T pop() {
        if (!empty()) {
            T item = data.back();
            data.pop_back();
            return item;
        }
        throw std::out_of_range("Stack is empty");
    }

    bool empty() const {
        return data.empty();
    }

    size_t size() const {
        return data.size();
    }
};

int main() {
    // Create a stack of integers
    Stack<int> intStack;

    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    std::cout << "Stack size: " << intStack.size() << std::endl;
    while (!intStack.empty()) {
        std::cout << "Popped: " << intStack.pop() << std::endl;
    }

    // Create a stack of strings
    Stack<std::string> stringStack;

    stringStack.push("Hello");
    stringStack.push("World");

    std::cout << "Stack size: " << stringStack.size() << std::endl;
    while (!stringStack.empty()) {
        std::cout << "Popped: " << stringStack.pop() << std::endl;
    }

    return 0;
}
