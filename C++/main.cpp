#include <iostream>
#include <cstdio>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <memory>

#define MAX 65535;
#define MIN 1;

class Unique {
public: Unique() { }

};
int main(int argc, char **argv){

    std::cout << ":: \t C++ Programming - OOP !! :: " << std::endl;
    std::cout << "\n\t ============================== \t\n" << std::endl;
    
    std::shared_ptr<Unique> ptr = std::make_shared<Unique>(new Unique());
    std::weak_ptr<Unique> weak = static_cast<int*>(new Unique());
    
    std::cout << "\n\t ============================== \t\n" << std::endl;
    return (0);
}