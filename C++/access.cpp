#include <iostream>

class Access {
public:
    int publicVar;    // Public member variable

    void publicMethod() {
        std::cout << "Public method called." << std::endl;
    }

protected:
    int protectedVar; // Protected member variable

    void protectedMethod() {
        std::cout << "Protected method called." << std::endl;
    }

private:
    int privateVar;   // Private member variable

    void privateMethod() {
        std::cout << "Private method called." << std::endl;
    }
};

class Derived : public Access {
public:
    void accessProtected() {
        protectedVar = 30; 
        protectedMethod();       
    }
};

int main() {
    Access obj;

    // Accessing public members
    obj.publicVar = 42;
    obj.publicMethod();

    // Cannot access protected and private members directly from the main function
    // obj.protectedVar = 30;
    // obj.protectedMethod();  

    // obj.privateVar = 20; 
    // obj.privateMethod();
    Derived derivedObj;
    derivedObj.accessProtected();
    
    return 0;
}
