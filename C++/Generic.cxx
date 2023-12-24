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
    string parentName;
    int protected_var = 0;
    int private_var = 0;
    int public_var = 0;

    Global() {
        cout << "Protected : " << endl;
        cin >> protected_var;
        cout << "Private : " << endl;
        cin >> private_var;
        cout << "Public : " << endl;
        cin >> public_var;
    }
    void getParentName() const {
        cout << "Parent's Name : " << this->parentName << endl;
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
template <typename X> class Child : public Global<int> {
    public:
    string childName = "";
    Child() {
        cout << "Please Enter Your Child's Name : " << endl;
        cin >> this->childName;
    }
    void getChildName() const {
        cout << "Your Child's Name : " << this->childName << endl;
    }
};
int main(int argc, char const *argv[])
{
    check<int>(861); // integer
    check<bool>(false); // boolean
    check<double>(8832.53); // double
    check<string>("String."); // string

    Global<int> G;
    G.getParentName();

    Child<int> C;
    C.getChildName();

    return 0;
}
