#include<iostream>
#include<conio.h>

template <class T> class Normal{
    public: 
        std::string val;
    Normal (){
        std::cout << "Default constructor called" << std::endl;
    }
    Normal (const T normal){
        this->val = normal;
    } 

    T display() const{
        std::cout << "Value: " << this->val << std::endl;
    }
};
int main(int argc, char const *argv[])
{
    Normal<int> N;
    Normal<double> D(55.66);
    N.display();
    D.display();
    return 0;
}
