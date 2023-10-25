#include <iostream>
#include <windows.h>

template <class T> class Normal {
public:
    T val;
    Normal() {
        std::cout << "Default constructor called" << std::endl;
    }
    Normal(const T normal) {
        this->val = normal;
    }
    ~Normal() {
        std::cout << "Normal Class Object Destroyed." << std::endl;
    }
    T display() const {
        std::cout << "Value: " << this->val << std::endl;
    }
};

template <class X> class Special : public Normal<bool> {
    static int count;
public:
    Special() {
        count++;
        std::cout << "Special Class Default Constructor." << std::endl;
    }
    ~Special() {
        count--;
        std::cout << "Special Class Object Destroyed." << std::endl;
    }
    static X ShowCount() {
        std::cout << "Total Objects Created : " << count << std::endl;
        return count;
    }
};

// Initialize the static member count
template <class X> int Special<X>::count = 0;

int main(int argc, char const *argv[]) {
    /* == Class Normal ==  */
    Normal<int> N;
    Normal<double> D(55.66);
    N.display();
    D.display();
    
    /* == Class Special ==  */
    Special<float>::ShowCount();
    Special<float> *S = new Special<float>();
    S->display();
    
    system("pause");
    
    Special<float>::ShowCount();
    return 0;
}
