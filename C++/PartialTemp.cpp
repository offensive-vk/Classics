#include <iostream>
#include <cstdlib>

template <typename K, typename V>
class MyPair {
public:
    MyPair(K k, V v) : key(k), value(v) {}

    void print() const {
        std::cout << "General template: key = " << key << ", value = " << value << std::endl;
    }

private:
    K key;
    V value;
};
