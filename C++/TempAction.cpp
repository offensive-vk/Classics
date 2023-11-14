#include <iostream>
#include <typeinfo>

template <typename T> void Action(const T& value) {
    if (typeid(value) == typeid(int)) {
        std::cout << "Performing action for int: " << value << std::endl;
    } else if (typeid(value) == typeid(double)) {
        std::cout << "Performing action for double: " << value << std::endl;
    } else if (typeid(value) == typeid(std::string)) {
        std::cout << "Performing action for string: " << value << std::endl;
    } else {
        std::cout << "Performing action for unknown data type" << std::endl;
    }
}
template <typename T> void performAction(T value) {
    if constexpr (std::is_same_v<T, int>) {
        std::cout << "Performing action for int: " << value << std::endl;
    } else if constexpr (std::is_same_v<T, double>) {
        std::cout << "Performing action for double: " << value << std::endl;
    } else if constexpr (std::is_same_v<T, std::string>) {
        std::cout << "Performing action for string: " << value << std::endl;
    } else {
        std::cout << "Unknown data type" << std::endl;
    }
}
int main() {
    Action(42);              // Calls the int version
    Action(3.14);            // Calls the double version
    Action("Hello, World!"); // Calls the string version

    return 0;
}
