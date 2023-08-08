#include <iostream>
#include<conio.h>

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10;
    double num3 = 2.5, num4 = 3.7;

    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << add(num1, num2) << std::endl;
    std::cout << "Sum of " << num3 << " and " << num4 << " is: " << add(num3, num4) << std::endl;

    return 0;
}
