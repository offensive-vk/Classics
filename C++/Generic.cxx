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
template <> class Global {
    public:
    int protected = 0;
    int private = 0;
    int public = 0;
    
    protected: template <typename S> void static_member(){
        cout << "Protected Member Function : " << this->protected << endl;
    }
};
int main(int argc, char const *argv[])
{
    check<bool>(false); // boolean
    check<double>(8832.53); // double
    return 0;
}
