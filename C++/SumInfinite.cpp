#include <iostream>
#include <conio.h>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    std::cout << "The sum of the first " << n << " numbers is: " << sum << std::endl;

    return 0;
}
