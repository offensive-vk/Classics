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
template <typename XGlobal> class Global {
    public:
    int protected_var = 0;
    int private_var = 0;
    int public_var = 0;

    Global(){
        cout << "Protected : " << endl;
        cin >> protected_var;
        cout << "Private : " << endl;
        cin >> private_var;
        cout << "Public : " << endl;
        cin >> public_var;
    }

    XGlobal showData() {
        this->public_member();
        this->private_member();
        this->protected_member();
    }
    template <typename C> void public_member() {
        cout << "Private Member Function : " << this->public_var << endl;
    }
    protected: template <typename A> void protected_member() {
        cout << "Protected Member Function : " << this->protected_var << endl;
    }
    private: template <typename B> void private_member() {
        cout << "Private Member Function : " << this->private_var << endl;
    }
};
int main(int argc, char const *argv[])
{
    // check<bool>(false); // boolean
    // check<double>(8832.53); // double
    // check<string>("String."); // string

    Global<int> G;
    G.showData();
    return 0;
}
