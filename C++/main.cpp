#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<cstdlib>
using namespace std;
static const int age = 10;
#define MAX 999;

class Human {
    public:
    unsigned int age = 0;
    string name;

    ~Human() {
        std::cout << "\t Destructor Has Been Called !!\n" << endl;
    }
    Human(){
        name = "Unknown";
        // cin >> name;
    }
    Human(string name){
        this->name = name;
    }
    void spawn() {
        cout << this->name;
        cout << "Spawned to Earth." << endl;
    }

    virtual void speak(){
        std::cout << "\t Hello, My Name is " << this->name << " and I am a Human.\n" << endl;
    }
    virtual void die() {
        if(age <= 80 || age >= 90)
        {
            std::cout << "\t I lived enough for " << age << " years on earth.\n\t Goodbye!\n" << endl;
        }
    }
};

class Women: public Human{

    private: string name = "";
    public: string gender = "Female";
    Women()
    {   
        cout << "Enter Your Name: " << endl;
        cin >> this->name;
    }
    void speak() override{
        cout << "\t Hello, My Name is " << this->name << " and I am a Female \n" << endl;
    }
    ~Women(){ }
};

int main(int argc, char **argv){

    std::cout << ":: \t C++ Programming - OOP !! :: " << endl;
    std::cout << "\n\t ============================== \t\n" << endl;

    Women W;
    W.speak();

    cout << endl;
    // W.spawn();
    // W.speak();

    std::cout << "\n\t ============================== \t\n" << endl;
    return (0);
}