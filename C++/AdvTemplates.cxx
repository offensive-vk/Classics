#include <iostream>
#include <vector>

// Template class for a generic stack
template <typename T>
class Stack {
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