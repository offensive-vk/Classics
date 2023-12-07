#include <iostream>

int linearSearch(int arr[], int element) {
    for(int c = 0; c < 5; c++) {
        if(arr[c] == element) {
            std::cout << "Element Found At Index " << c << std::endl;
            return c;
        }
    }
    
}
int main(int argc, char **argv[]) {
    int arr[] = {534, 728, 111, 960, 555};

    for(int x: arr) {
        std::cout << x << std::endl;
    }
    
    auto result = linearSearch(arr, 960);
    std::cout << "Element : "<< arr[result] << std::endl;
    return 0;
}
