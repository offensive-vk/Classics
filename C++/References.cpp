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
int main() {
    // 1. Reference to a variable
    int num = 42;
    int& numRef = num;
    
    std::cout << "1. Reference to a variable: " << numRef << std::endl;
    
    // 2. Reference as a function parameter
    std::vector<int> data = {1, 2, 3, 4, 5};
    modifyVector(data);
    std::cout << "2. Reference as a function parameter: ";
    for (int element : data) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    
    // 3. Reference to a dynamically allocated variable
    int* dynamicVar = new int(99);
    int& dynamicRef = *dynamicVar;
    std::cout << "3. Reference to a dynamically allocated variable: " << dynamicRef << std::endl;
    
    // 4. Reference to an array
    int arr[] = {10, 20, 30, 40, 50};
    int (&arrRef)[5] = arr;
    std::cout << "4. Reference to an array: " << arrRef[2] << std::endl;
    
    // 5. Reference to a const variable
    const int constNum = 123;
    const int& constNumRef = constNum;
    std::cout << "5. Reference to a const variable: " << constNumRef << std::endl;
    
    // 6. Reference to an rvalue (temporary)
    int&& rvalueRef = 999;
    std::cout << "6. Reference to an rvalue (temporary): " << rvalueRef << std::endl;
    
    // 7. Reference to a local variable (dangerous!)
    int& localVarRef = getLocalVariable();
    std::cout << "7. Reference to a local variable (dangerous!): " << localVarRef << std::endl;
    
    // Clean up dynamically allocated memory
    delete dynamicVar;
    
    return 0;
}