#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
static string name = "";
template <typename Type> inline int check(Type args) {

    cout << "Enter The Value : " << endl;
    cin >> name;

    cout << "Your Value is : " << name << endl;
    return 1;
}
// template <> class Global {
//     public: Global(string value): value(value) { }
//     static Global getValue(){
//         cout << "The Value is : " << this->value << endl;
//         return this->value;
//     }
//     private: template <typename X> virtual void Value();
// };
int main(int argc, char const *argv[])
{
    check<bool>(false); // boolean
    check<double>(8832.53); // double
    return 0;
}
