#include <iostream>
#include <vector>

using namespace std;

// Function to perform binary search
int binarySearch(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        // Calculate the middle index
        int mid = low + (high - low) / 2;

        // Check if the middle element is the target
        if (arr[mid] == target) {
            return mid; // Target found, return the index
        } else if (arr[mid] < target) {
            // If the target is greater, search the right half
            low = mid + 1;
        } else {
            // If the target is smaller, search the left half
            high = mid - 1;
        }
    }

    // If the target is not in the array, return -1
    return -1;
}

int main() {
    // Example usage
    vector<int> sortedArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 7;

    // Perform binary search
    int result = binarySearch(sortedArray, target);

    // Display the result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
