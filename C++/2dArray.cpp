#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

// Function to display a 2D array
// void displayArray(int arr[][COLS]) {
//     for (int i = 0; i < ROWS; i++) {
//         for (int j = 0; j < COLS; j++) {
//             cout << arr[i][j] << "\t";
//         }
//         cout << endl;
//     }
// }
void displayArray(int arr[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << setw(4) << arr[i][j]; // Using setw for formatting
        }
        cout << endl;
    }
}
// Function to find the sum of all elements in a 2D array
int sumArray(int arr[][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    string str;
    int array2D[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "2D Array:" << endl;
    displayArray(array2D);

    int totalSum = sumArray(array2D);
    cout << "Sum of all elements: " << totalSum << endl;

    return 0;
}