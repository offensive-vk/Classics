#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> items;

public:
    void push(T item) {
        items.push_back(item);
    }

    T pop() {
        if (!isEmpty()) {
            T item = items.back();
            items.pop_back();
            return item;
        }
        return T();
    }

    T peek() {
        if (!isEmpty()) {
            return items.back();
        }
        return T();
    }

    bool isEmpty() {
        return items.empty();
    }

    size_t size() {
        return items.size();
    }

    void clear() {
        items.clear();
    }
};

int main() {
    Stack<int> stack;

    stack.push(457);
    stack.push(227);
    stack.push(300);

    std::cout << "Stack size: " << stack.size() << std::endl;

    std::cout << "Top element: " << stack.peek() << std::endl;

    while (!stack.isEmpty()) {
        std::cout << "Popped: " << stack.pop() << std::endl;
    }

    std::cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}