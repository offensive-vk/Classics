#include <iostream>

int linearSearch(int arr[], int element) {
    for(int c = 0; c < 5; c++) {
        if(arr[c] == element) {
            std::cout << "Element Found At Index " << c << std::endl;
            return arr[c];
        }
        return NULL;
    }
    
}
int main(int argc, char **argv[]) {
    int arr[5] = {534,728,111, 960, 555};
    auto result = linearSearch(arr, 960);
    std::cout << result << std::endl;
    return 0;
}
