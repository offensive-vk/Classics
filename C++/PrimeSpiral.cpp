#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

constexpr int GRID_SIZE = 31;
constexpr int CENTER = GRID_SIZE / 2;

// Check if a number is prime (optimized)
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    int limit = static_cast<int>(std::sqrt(n));
    for (int i = 3; i <= limit; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

// Generate Ulam spiral and mark primes
void generateUlamSpiral(std::vector<std::vector<char>>& grid) {
    int x = CENTER, y = CENTER;
    int dx = 1, dy = 0;
    int steps = 1;
    int num = 1;

    while (x >= 0 && y >= 0 && x < GRID_SIZE && y < GRID_SIZE) {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < steps; ++j) {
                if (x >= 0 && y >= 0 && x < GRID_SIZE && y < GRID_SIZE)
                    grid[y][x] = isPrime(num) ? '#' : '.';
                x += dx;
                y += dy;
                ++num;
            }
            std::swap(dx, dy);
            dy = -dy;
        }
        ++steps;
    }
}

int main() {
    std::vector<std::vector<char>> grid(GRID_SIZE, std::vector<char>(GRID_SIZE, ' '));

    generateUlamSpiral(grid);

    for (const auto& row : grid) {
        for (char c : row)
            std::cout << c << ' ';
        std::cout << '\n';
    }

    return 0;
}
