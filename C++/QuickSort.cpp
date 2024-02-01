#include <iostream>
#include <vector>

// Function to partition the array and return the index of the pivot element
int partition(std::vector<int>& arr, int low, int high) {
    // Select the rightmost element as the pivot
    int pivot = arr[high];
    
    // Index of the smaller element
    int i = low - 1;
    
    // Partitioning loop
    for (int j = low; j <= high - 1; ++j) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            // Increment index of smaller element
            i++;
            
            // Swap arr[i] and arr[j]
            std::swap(arr[i], arr[j]);
        }
    }
    
    // Swap arr[i+1] and arr[high] (pivot)
    std::swap(arr[i + 1], arr[high]);
    
    // Return the partitioning index
    return i + 1;
}

// Function to perform the Quick Sort algorithm
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partition the array
        int pi = partition(arr, low, high);
        
        // Recursively sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    std::vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    
    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Call quickSort function to sort the array
    quickSort(arr, 0, n - 1);
    
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
