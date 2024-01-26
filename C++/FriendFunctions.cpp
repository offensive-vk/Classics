#include <iostream>

class MyClass {
private:
    int privateData;

    // Declare a function as a friend of this class
    friend void friendFunction(MyClass&);

    // Declare another class as a friend
    friend class FriendClass;

public:
    MyClass(int data) : privateData(data) {}

    // Accessor function to retrieve private data
    int getPrivateData() const {
        return privateData;
    }
};

// Define the friend function
void friendFunction(MyClass& obj) {
    // Friend function can access private members of MyClass
    std::cout << "Friend Function accessing private data: " << obj.privateData << std::endl;
}

// Define the friend class
class FriendClass {
public:
    void accessPrivateData(MyClass& obj) {
        // Friend class can access private members of MyClass
        std::cout << "Friend Class accessing private data: " << obj.privateData << std::endl;
    }
};

int main() {
    MyClass obj(10);

    // Accessing private data using friend function
    friendFunction(obj);

    // Accessing private data using friend class
    FriendClass fc;
    fc.accessPrivateData(obj);

    // Accessing private data directly (outside the class or friend functions/classes) will result in a compilation error
    // std::cout << "Accessing private data directly: " << obj.privateData << std::endl;

    return 0;
}