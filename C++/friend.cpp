#include <iostream>

class MyClass {
private:
    int data;

public:
    MyClass(int d) : data(d) {}

    // Declare the friend function
    friend void displayData(const MyClass& obj);
};

// Define the friend function
void displayData(const MyClass& obj) {
    std::cout << "Friend function: Data = " << obj.data << std::endl;
}

int main() {
    MyClass obj(42);

    displayData(obj);

    return 0;
}
