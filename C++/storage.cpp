#include <iostream>
#include <conio.h>
int global_var = 10; // Global variable

int main() {
    // Using 'auto' keyword to automatically infer variable type
    auto x = 5;
    
    // Using 'extern' keyword to declare an externally defined variable
    extern int external_var;
    
    // Using 'static' keyword to create a static local variable
    static int static_var = 7;
    
    // Using 'register' keyword to suggest that a variable be stored in a CPU register
    register int reg_var = 42;

    std::cout << "Global variable: " << global_var << std::endl;
    std::cout << "Auto variable: " << x << std::endl;
    std::cout << "Extern variable: " << external_var << std::endl;
    std::cout << "Static variable: " << static_var << std::endl;
    std::cout << "Register variable: " << reg_var << std::endl;

    return 0;
}

// Define the externally declared variable
int external_var = 20;
