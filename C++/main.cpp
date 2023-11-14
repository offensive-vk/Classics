#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<cstdlib>
using namespace std;
static const int age = 10;
#define MAX 999;

class Human{
    public:
    int id;
    unsigned int age = 0;
    string name;
    ~Human(){std:: cout << "\t Destructor Has Been Called !!\n" << endl;}
    Human(){
        id = 10 + (rand() % (80 - 10 + 1));
        name = "Unknown";
    }
    Human(int id, string name){
        this->id = id;
        this->name = name;
    }
    void Spawn(Human& human){
        cout << "Spawned to Earth." << endl;
    }

    void speak(){
        std::cout << "\t Hello, My Name is " <<this->name << " and I am a Human.\n" << endl;
    }
    void die()
    {
        if(age <= 80 || age >= 90)
        {
            std::cout << "\t I lived enough for " << age << "years on earth.\n\t\t Goodbye!\n" << endl;
        }
        age--;
    }
};

class Women: public Human{

    public:
    string gender = "Female";
    Women()
    {   
        Human::die(age);
        Human::speak();
    }
    ~Women(){ }
};

int main(int argc, char **argv){

    std::cout << ":: \t C++ Programming - OOP !! :: " << endl;
    std::cout << "\n\t ============================== \t\n" << endl;



    std::cout << "\n\t ============================== \t\n" << endl;
    return (0);
}