#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
static string name = "";
template <typename Type> inline int check(Type args) {

    cout << "Enter The Value : " << endl;
    cin >> name;

    cout << "Your Name is : " << name << endl;
    return 1;
}

int main(int argc, char const *argv[])
{
    check<int>(false);
    return 0;
}
