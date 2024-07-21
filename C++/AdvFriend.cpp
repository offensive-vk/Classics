#include <iostream>

// Forward declaration of the template class
template<typename T> class MyClass;

// Define the template function
template<typename T> void printData(const MyClass<T>& obj);

// Define the template class
template<typename T> class MyClass {
private:
    T privateData;

public:
    MyClass(T data) : privateData(data) {}

    // Declare the printData function as a friend
    friend void printData<T>(const MyClass<T>& obj);
};

// Define the friend function to print private data of MyClass objects
template<typename T> void printData(const MyClass<T>& obj) {
    std::cout << "Friend function accessing private data: " << obj.privateData << std::endl;
}

int main() {
    MyClass<int> obj1(10);
    MyClass<double> obj2(3.14);

    // Call the friend function for both objects
    printData(obj1);
    printData(obj2);

    return 0;
}