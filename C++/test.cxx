#include<iostream>
#include<conio.h>

class Source{
private:
    unsigned int id;
    unsigned int age; 
    unsigned int *data[5] = {};
public:
    std::string bases = " ";
    Source(unsigned int id, unsigned int age, std::string bases)
    {
        this->id = id;
        this->age = age;
    }
    void display(){
        std::cout << "Your Id : " << this->id << std::endl;
        std::cout << "Your Age : " << this->age << std::endl;
        std::cout << " Thank you . " << std::endl;
    }
    ~Source(){ std::cout << "Goodbye Source class members. " << std::endl; }
};

int main(int argc, char const *argv[])
{
    Source *X;
    X = new Source(55, 100, "Test.cxx");
    X->display();
    return 0;
}
