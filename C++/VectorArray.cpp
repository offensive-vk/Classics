#include <iostream>
#include <vector>

using namespace std;

// Function to display the elements of an array
void displayArray(const vector<int>& arr) {
    cout << "Array elements: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Function to create an array
vector<int> createArray(int size) {
    vector<int> arr(size);
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    return arr;
}

// Function to insert an element at a specific position
void insertElement(vector<int>& arr, int position, int value) {
    arr.insert(arr.begin() + position, value);
    cout << "Element " << value << " inserted at position " << position << endl;
}

// Function to delete an element at a specific position
void deleteElement(vector<int>& arr, int position) {
    if (position >= 0 && position < arr.size()) {
        arr.erase(arr.begin() + position);
        cout << "Element at position " << position << " deleted" << endl;
    } else {
        cout << "Invalid position for deletion" << endl;
    }
}

// Function to update an element at a specific position
void updateElement(vector<int>& arr, int position, int newValue) {
    if (position >= 0 && position < arr.size()) {
        arr[position] = newValue;
        cout << "Element at position " << position << " updated to " << newValue << endl;
    } else {
        cout << "Invalid position for updating" << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Create an array
    vector<int> myArray = createArray(size);

    // Display the initial array
    displayArray(myArray);

    // Insert an element
    insertElement(myArray, 2, 99);
    displayArray(myArray);

    // Delete an element
    deleteElement(myArray, 4);
    displayArray(myArray);

    // Update an element
    updateElement(myArray, 1, 55);
    displayArray(myArray);

    return 0;
}
