#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double b = 3.14;
    char c = 'A';

    // Implicit Type Conversion
    double x = a;
    int y = b;
    int z = c;

    cout << "Implicit Type Conversion:" << endl;
    cout << "int a = " << a << endl;
    cout << "double b = " << b << endl;
    cout << "char c = " << c << endl;
    cout << "double x = " << x << endl;
    cout << "int y = " << y << endl;
    cout << "int z = " << z << endl;

    // Explicit Type Conversion
    double m = 3.14;
    int n = (int)m;
    char o = 'B';
    int p = (int)o;

    cout << "Explicit Type Conversion:" << endl;
    cout << "double m = " << m << endl;
    cout << "int n = " << n << endl;
    cout << "char o = " << o << endl;
    cout << "int p = " << p << endl;

        // Static Cast
    double q = 3.14;
    int r = static_cast<int>(q);
    char s = 'C';
    int t = static_cast<int>(s);

    cout << "Static Cast:" << endl;
    cout << "double q = " << q << endl;
    cout << "int r = " << r << endl;
    cout << "char s = " << s << endl;
    cout << "int t = " << t << endl;

    // Dynamic Cast
    class Base {
        virtual void print() {}
    };

    class Derived : public Base {
        void print() {}
    };

    Base* b1 = new Derived;
    Derived* d1 = dynamic_cast<Derived*>(b1);
    if (d1 == nullptr) {
        cout << "Dynamic Cast Failed" << endl;
    } else {
        cout << "Dynamic Cast Succeeded" << endl;
    }

    Base* b2 = new Base;
    Derived* d2 = dynamic_cast<Derived*>(b2);
    if (d2 == nullptr) {
        cout << "Dynamic Cast Failed" << endl;
    } else {
        cout << "Dynamic Cast Succeeded" << endl;
    }

    // Reinterpret Cast
    int* u = new int(65);
    char* v = reinterpret_cast<char*>(u);
    cout << "Reinterpret Cast:" << endl;
    cout << "int* u = " << *u << endl;
    cout << "char* v = " << *v << endl;

    return 0;
}
