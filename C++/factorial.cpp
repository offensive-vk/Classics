#include <iostream>

int main() {
    int num, factorial = 1;
    
    std::cout << "Enter A Number: ";
    std::cin >> num;
    
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    
    std::cout << "The factorial of " << num << " is: " << factorial << std::endl;
    return 0;
}
