#include <iostream>
#include <vector>
#include <ctime>    // for time()
#include <cstdlib>  // for rand() and srand()

// Function to shuffle an array
void shuffleArray(int arr[], int size) {
    srand(time(0)); // Seed for rand()
    for (int i = size - 1; i > 0; --i) {
        int j = rand() % (i + 1); // Generate a random index
        // Swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

// Function to shuffle a vector
void shuffleVector(std::vector<int>& vec) {
    srand(time(0)); // Seed for rand()
    int size = vec.size();
    for (int i = size - 1; i > 0; --i) {
        int j = rand() % (i + 1); // Generate a random index
        // Swap vec[i] and vec[j]
        int temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;
    }
}

int main() {
    const int arrSize = 5;
    int arr[arrSize] = {1, 2, 3, 4, 5};

    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Shuffle the array
    shuffleArray(arr, arrSize);

    // Output shuffled array
    std::cout << "Shuffled array: ";
    for (int i = 0; i < arrSize; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Shuffle the vector
    shuffleVector(vec);

    // Output shuffled vector
    std::cout << "Shuffled vector: ";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
