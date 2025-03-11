#include <iostream>
#include <vector>
#include <cstdlib>
#define AUTHOR "@offensive-vk"
#define DATED "March-8"

int main() {
    std::cout << "🛑 WARNING: This program can allocate a large amount of RAM!\n";
    std::cout << "💾 Enter the amount of RAM to consume (in MB): ";

    int ramMB;
    std::cin >> ramMB;

    if (ramMB <= 0) {
        std::cout << "❌ Invalid input. Please enter a positive integer.\n";
        return 1;
    }

    size_t ramBytes = static_cast<size_t>(ramMB) * 1024 * 1024;
    std::cout << "🚀 Allocating " << ramMB << " MB of RAM...\n";

    try {
        // Allocate memory
        std::vector<char> memory(ramBytes, 1);
        std::cout << "✅ Memory allocation complete. Press ENTER to release memory and exit...\n";

        std::cin.ignore(); // Ignore leftover newline
        std::cin.get(); // Wait for ENTER

    } catch (const std::bad_alloc &) {
        std::cout << "❌ Memory allocation failed!\n";
        return 1;
    }

    std::cout << "🔄 Releasing memory... Done!\n";

    return 0;
}
