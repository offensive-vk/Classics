#include <iostream>
#include <ctime>

int main() {
    // Get the current time using time()
    time_t currentTime = time(nullptr);

    // Convert the current time to a string representation
    std::cout << "Current time: " << ctime(&currentTime) << std::endl;

    return 0;
}
