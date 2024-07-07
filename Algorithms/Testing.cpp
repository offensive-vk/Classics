#include<iostream>
#include<cassert>
#define FILE "Testing.cpp/*.c**"

template <class T> class Test {
    std::string name;
    T x;
    T y;
    Test() {/**@param NULL */ }
    ~Test() { /**@default destructor. */}
    Test(int& user, std::string& name) {
        std::cout << "Params Done\n" << std::endl;
    }
};

int main(void) {
    std::cout << "-- Starting Tests --\n ";
    Test<int> T();
    int *US = 8;
    std::string *user = "Default User"; 
    
    Test<int> sample(US, user);

    return 0;
}