#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size = 0;
    cout << "Enter The Size of Array : " << endl;
    cin >> size;

    int *arr = new int[size];
    cout << "Created an Array of Size " << size << endl;

    for (int i = 0; i < size; i++) {
        cout << "Enter Element at Index : " << i << endl;
        cin >> arr[i];
    }
    cout << "Displaying Array Elements : " << endl;
    cout << "========================" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
