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

int main() {
    unique_ptr<MyClass> ptr1(new MyClass);
    ptr1->hello();

    shared_ptr<MyClass> ptr2 = make_shared<MyClass>();
    ptr2->hello();

    weak_ptr<MyClass> ptr3 = ptr2;
    cout << "ptr3.use_count() = " << ptr3.use_count() << endl;

    shared_ptr<MyClass> ptr4 = ptr3.lock();
    ptr4->hello();

    return 0;
}