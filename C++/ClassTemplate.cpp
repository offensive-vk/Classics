#include<iostream>
#include<conio.h>

template <class T> class Normal{
    public: 
    Normal (const &T){
        this->val = 'Constructor';
    } 

    T display() final{
        std::cout << "Value: " << this->val << std::endl;
    }
};
int main(int argc, char const *argv[])
{
    
    return 0;
}
