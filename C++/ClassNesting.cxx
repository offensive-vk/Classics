#include<iostream>
#include<conio.h>
#include<windows.h>
static const char limit = 'A';

class Parent{
    public:
        int id;
        int reg;

    Parent(int id, int reg) : id(id), reg(reg) {
        std::cout << "\t :: Constructor Has been Called :: \n" << std::endl;
        // this->id = id;

    }
    void show(){
        std::cout << this->id << std::endl;
        std::cout << this->reg << std::endl;

    }
};

int main()
{
    std::cout << "\t :: Class Nesting:: \n" << std::endl;
    Parent p(9001, 454201);
    p.show();
    return 0;
}
