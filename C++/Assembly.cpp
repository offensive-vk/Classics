#include <iostream>

int main() {
    int a = 5, b = 3;
    int result;

    asm("add %1, %0" : "=r" (result) : "r" (a), "r" (b));
    asm volatile("out %%al, %%dx" : : "a" (5460), "d" (4545));

    std::cout << "Result: " << result << std::endl;
    return 0;
}
