#include<iostream>
#include<conio.h>
#include<windows.h>
static const char limit = 'A';

class Parent{
    public:
        int id;
        int reg;

    Parent(int id, int regx) : id(id), reg(regx) {
        std::cout << "\t :: Constructor <Parent> Has been Called :: \n" << std::endl;

    }
    void show(){
        std::cout << this->id << std::endl;
        std::cout << this->reg << std::endl;
    }
    class Kid{
        std::string name;
        int id;
        bool reg;

        Kid(std::string name, int id, bool reg){
            std::cout << "\t :: Constructor <Kid> Has been Called :: \n" << std::endl;
        }
    }
};

int main()
{
    std::cout << "\t :: Class Nesting:: \n" << std::endl;
    Parent p(9001, 454201);
    p.show();
    return 0;
}
