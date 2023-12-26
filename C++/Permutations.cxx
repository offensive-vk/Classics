#include <iostream>
#include <climits> // for INT_MAX
#include <vector>

// Function to swap two elements in an array
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Recursive function to generate permutations
void Permute(int array[], int start, int size, std::vector<std::vector<int>> &result) {
    if (start == size - 1) {
        // Base case: reached the end of the array, add the permutation to the result
        std::vector<int> permutation(array, array + size);
        result.push_back(permutation);
        return;
    }

    for (int i = start; i < size; i++) {
        // Swap elements at indices start and i
        swap(array[start], array[i]);

        // Recursively generate permutations for the rest of the array
        Permute(array, start + 1, size, result);

        // Backtrack: undo the swap to restore the array to its original state
        swap(array[start], array[i]);
    }
}
int main() {
    int size = 0;
    std::cout << "Please Enter The Size of Array : " << std::endl;
    std::cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter The Element At Index " << i << " : ";
        std::cin >> arr[i];
    }

    std::cout << "\n==================\n" << std::endl;
    std::cout << "Array Elements After Sorting : \n" << std::endl;

    for (int val : arr) {
        std::cout << val << std::endl;
    }

    std::cout << "\n==================\n" << std::endl;
    std::cout << "Permutations of the Array : \n" << std::endl;

    // Vector to store permutations
    std::vector<std::vector<int>> result;

    // Generate permutations
    Permute(arr, 0, size, result);

    // Display permutations
    for (const auto &permutation : result) {
        for (int val : permutation) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
