#include <iostream>
#include <memory>

using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "MyClass created" << endl;
    }
    ~MyClass() {
        cout << "MyClass destroyed" << endl;
    }
    void hello() {
        cout << "Hello from MyClass" << endl;
    }
};

