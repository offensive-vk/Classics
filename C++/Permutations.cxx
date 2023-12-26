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
