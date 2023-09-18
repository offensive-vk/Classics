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
    string name;
    //static std::string gender = NULL;
    Human(){
        id = 10 + (rand() % (80 - 10 + 1));
        name = "Unknown";
    }
    Human(int id, string name){
        
        this->id = id;
        this->name = name;
        //speak();
    }
    ~Human(){std:: cout << "\t Destructor Has Been Called !!\n" << endl;}
    void live(int id)
    {   
        id = 100% 10 + 10;
        std::cout << "\t I'm living from " << id << " years on earth.\n" << endl;
        id++;
    }
    void speak(){
        std::cout << "\t Hello, My Name is " <<this->name << " and I am a Human.\n" << endl;
    }
    void die(int id)
    {
        if(id <= 80 || id >= 90)
        {
            std::cout << "\t I lived enough for " << id << "years on earth.\n\t\t Goodbye!\n" << endl;
        }
        id--;
    }
};

class Women: public Human{
    public:
    //static std::string gender = "Female";
    
    Women()
    {
        Human::live(73);
        Human::die(85);
        Human::speak();
    }
};

int main(int argc, char **argv){
    std::cout << ":: \t C++ Programming - OOP !! :: " << endl;
    
    std::cout << "\n\t ============================== \t\n" << endl;
    int id = 0;
    string name = " ";
    std::cout << "\tEnter Your ID: " ;
    std::cin >> id;
    std::cout << "\tEnter Your Name: " ;
    std::cin >> name;
    std::cout << "\n\t ==============================\n" << endl;
    
    Human raju(id, name);

    raju.live(id);
    raju.speak();
    raju.die(59);
    
    std::cout << "\n\t ============================== \t\n" << endl;
    return (1);
}