#include <iostream>

int& bubbleSort(int arr[], int size) {
    int x = size;
    
    for(int i = 0; i < x - 1; i++) {
        for(int j = 0; j < x - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return *arr;
}

int main(int argc, char **argv[]) {
    int size = 5;
    int arr[size] = {10, 78, 90, 33, 48};

    bubbleSort(arr, size);
    std::cout << "\n==================\n" << std::endl;
    std::cout << "Array Elements After Sorting : \n" << std::endl;

    for(int val : arr) {
        std::cout << val << std::endl;
    }

    return 0;
}