#include <iostream>
#include <vector>

// Function that modifies a vector using a reference
void modifyVector(std::vector<int>& vec) {
    for (int& element : vec) {
        element *= 2;
    }
}

// Function that returns a reference to a local variable
int& getLocalVariable() {
    int localVar = 100;
    return localVar; // Avoid returning a reference to a local variable!
}


