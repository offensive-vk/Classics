#include <iostream>

int calculate_sum(int n) {
    int total = 0;
    for (int i = 1; i <= n; ++i) {
        total += i;
    }
    return total;
}

int main() {
    int N = 10000000;
    int result = calculate_sum(N);
    std::cout << result << std::endl;
    return 0;
}
