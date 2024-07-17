#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstdlib>
#include <algorithm>
#include <vector>

#define MAX 65535;
#define MIN 1;

int main(int argc, char **argv){

    std::cout << ":: \t C++ Programming - OOP !! :: " << std::endl;
    std::cout << "\n\t ============================== \t\n" << std::endl;

    std::vector<std::string> res = {0};
    std::string data = "C++ is Cool!";

    for(size_t c = 0; c <= 99; ++c) {
        res.push_back(data);
        std::cout << data << " -> " << c << " - times" << std::endl;
    } 
    std::cout << std::endl;
    std::cout << "Length of Vector: " << res.size() << std::endl;
    std::cout << "\n\t ============================== \t\n" << std::endl;
    return (0);
}