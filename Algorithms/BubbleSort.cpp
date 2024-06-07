#include <iostream>

int& BubbleSort(int arr[], int size) {
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
    int size = 0;
    std::cout << "Please Enter The Size of Array : " << std::endl;
    std::cin >> size;
    int arr[size];
    // int *arr = new int[size];

    for(int i = 0; i < size; i++) {
        std::cout << "Enter The Element At Index : " << i << std::endl;
        std::cin >> arr[i];
    }

    BubbleSort(arr, size);
    std::cout << "\n==================\n" << std::endl;
    std::cout << "Array Elements After Sorting : \n" << std::endl;

    for(int val : arr) {
        std::cout << val << std::endl;
    }

    return 0;
}