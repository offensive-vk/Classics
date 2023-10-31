#include <iostream>
#include <cstdlib>

template <typename Key, typename Value>
class MyPair {
public:
    MyPair(Key k, Value v) : key(k), value(v) {}

    void print() const {
        std::cout << "General template: key = " << key << ", value = " << value << std::endl;
    }

private:
    Key key;
    Value value;
};
template <typename T>
class MyPair<T, int> {
public:
    MyPair(T k, int v) : key(k), value(v) {}

    void print() const {
        std::cout << "Partial specialization for int values: key = " << key << ", value = " << value << std::endl;
    }

private:
    T key;
    int value;
};

int main() {
    MyPair<double, std::string> p1(3.2, "example");
    MyPair<char, int> p2('A', 65);
    p1.print(); // General template: key = 3.2, value = example
    p2.print(); // Partial specialization for int values: key = A, value = 65
}