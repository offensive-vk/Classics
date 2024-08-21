#include <iostream>
#include <cstddef>
#include <algorithm>
#include <vector>

int findSmallest(const std::vector<int>& arr, size_t size) {
    int smallest = arr[0];
    int smallest_index = 0;

    for(size_t i = 1; i < size; ++i) {  
        // Start from 1 because arr[0] is already smallest initially
        if(arr[i] < smallest) {
            smallest = arr[i];
            smallest_index = i;
        }
    }
    return smallest_index;
}

template <typename T> std::vector<T> selectionSort(std::vector<T>& arr, size_t size) {
    std::vector<T> newArr = {};
    for(size_t i = 0; i < size; ++i) {
        int smallest_index = findSmallest(arr, arr.size());
        newArr.push_back(arr[smallest_index]);
        arr.erase(arr.begin() + smallest_index);
    }
    return newArr;
}

int main() {
    std::vector<int> x = {44, 15, 20, 36, 99};
    std::cout << "Index of smallest element in first 4 elements: " << findSmallest(x, 4) << std::endl;
    
    std::vector<int> sortedArray = selectionSort(x, x.size());
    std::cout << "Sorted array: ";
    for(const int& num : sortedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
