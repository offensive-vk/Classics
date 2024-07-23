#include <iostream>
#include <vector>
#include <algorithm> // for std::shuffle
#include <random>    // for std::random_device, std::mt19937, std::uniform_int_distribution

// Function to generate a random integer between min and max
int generateRandomNumber(int min, int max) {
    std::random_device rd;   // obtain a random number from hardware
    std::mt19937 eng(rd());  // seed the generator
    std::uniform_int_distribution<> distr(min, max); // define the range

    return distr(eng);
}

// Function to pick a random element from a vector
template <typename T>
T pickRandomElement(const std::vector<T>& elements) {
    int index = generateRandomNumber(0, elements.size() - 1);
    return elements[index];
}

// Function to shuffle a vector randomly
template <typename T>
void shuffleVector(std::vector<T>& elements) {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(elements.begin(), elements.end(), g);
}

int main() {
    // Generate random number example
    int randomNum = generateRandomNumber(1, 100);
    std::cout << "Random number between 1 and 100: " << randomNum << std::endl;

    // Random element picking example
    std::vector<std::string> names = {"Alicia", "John", "Clair", "Don", "Eva"};
    std::string randomName = pickRandomElement(names);
    std::cout << "Randomly picked name: " << randomName << std::endl;

    // Shuffle vector example
    std::cout << "Original names: ";
    for (const auto& name : names) {
        std::cout << name << " ";
    }
    std::cout << std::endl;

    shuffleVector(names);

    std::cout << "Shuffled names: ";
    for (const auto& name : names) {
        std::cout << name << " ";
    }
    std::cout << std::endl;

    return 0;
}
