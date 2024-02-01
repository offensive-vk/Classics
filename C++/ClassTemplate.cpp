#include <iostream>
#include <windows.h>
#include <conio.h>

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
    virtual inline void check(int code = 900) {
        std::cout << "-> Code is : " << code << std::endl;
    }
};

/**
 * @brief A class template called Special that inherits from another class template called Normal.
 * 
 * The Special class template has a default constructor, a parameterized constructor, a destructor, and a static member function.
 * It also has a static member variable called count.
 * 
 * @param X The type of the object being created.
 */
template <class X> class Special : public Normal<bool> {
    static int count;
public:
    /**
     * @brief Default constructor for the Special class template.
     * 
     * The constructor increments the static member variable count and prints a message.
     */
    Special() {
        count++;
        std::cout << "Special Class Default Constructor." << std::endl;
    }    

    /**
     * @brief Parameterized constructor for the Special class template.
     * 
     * The constructor takes a parameter num of type X and calls the constructor of the base class Normal with the argument false.
     * It then increments the static member variable count and prints a message.
     * 
     * @param num The value to be assigned to the num variable.
     */
    Special(X num): Normal(false) {
        count++;
        std::cout << "Passed false to Parent Class(Normal) and num is assigned : " << num << std::endl;
        return;
    }

    /**
     * @brief Destructor for the Special class template.
     * 
     * The destructor decrements the static member variable count and prints a message.
     */
    ~Special() {
        count--;
        std::cout << "Special Class Object Destroyed." << std::endl;
    }

    /**
     * @brief Static member function that shows the count of objects created.
     * 
     * The function prints the value of the static member variable count and returns it.
     * 
     * @return The count of objects created.
     */
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
    N.check();

    /* == Class Special ==  */
    Special<float>::ShowCount();
    Special<bool> B;
    Special<float> *S = new Special<float>(900.11);
    
    S->display();
    B.display();

    delete S;
    Special<float>::ShowCount();

    /* == End == */
    system("pause");
    system("cls");
    return 0;
}
