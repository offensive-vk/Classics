#include <iostream>

int main() {
    // for loop
    std::cout << "For Loop:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Iteration " << i + 1 << std::endl;
    }

    // while loop
    std::cout << "\nWhile Loop:" << std::endl;
    int j = 0;
    while (j < 5) {
        std::cout << "Iteration " << j + 1 << std::endl;
        ++j;
    }

    // do-while loop
    std::cout << "\nDo-While Loop:" << std::endl;
    int k = 0;
    do {
        std::cout << "Iteration " << k + 1 << std::endl;
        ++k;
    } while (k < 5);

    return 0;
}
