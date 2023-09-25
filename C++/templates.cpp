#include <iostream>

// Generic Pair class using templates
template <typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first_(first), second_(second) {}

    T1 getFirst() const {
        return first_;
    }

    T2 getSecond() const {
        return second_;
    }

    void display() const {
        std::cout << "Pair: (" << first_ << ", " << second_ << ")" << std::endl;
    }

private:
    T1 first_;
    T2 second_;
};
