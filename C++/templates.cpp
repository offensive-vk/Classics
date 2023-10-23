#include <iostream>
/**
 * @authors Vedansh
*/
// Generic Pair class using templates
template <typename Type1, typename Type2>
class Pair {
public:
    Pair(Type1 first, Type2 second) : first_(first), second_(second) {}

    Type1 getFirst() const {
        return first_;
    }

    Type2 getSecond() const {
        return second_;
    }

    void display() const {
        std::cout << "Pair: (" << first_ << ", " << second_ << ")" << std::endl;
    }

private:
    Type1 first_;
    Type2 second_;
};
int main() {
    // Create pairs of different data types
    Pair<int, double> intDoublePair(1, 3.14);
    Pair<std::string, bool> stringBoolPair("Hello", true);

    // Display the pairs
    intDoublePair.display();
    stringBoolPair.display();

    // Access elements of the pairs
    std::cout << "First element of intDoublePair: " << intDoublePair.getFirst() << std::endl;
    std::cout << "Second element of stringBoolPair: " << stringBoolPair.getSecond() << std::endl;

    return 0;
}