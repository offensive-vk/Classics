#include<iostream>
#include<conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    std::array<int, 3> marks; // Definition
    marks[0] = 92;
    marks[1] = 97;
    marks[2] = 98;

    // Define and initialize
    std::array<int, 3> = {92, 97, 98};

    // With empty members
    std::array<int, 3> marks = {92, 97};
    std::cout << marks[2]; // Outputs: 0

    return 0;
}
