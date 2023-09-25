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

}

