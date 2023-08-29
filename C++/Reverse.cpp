#include <iostream>
using namespace std;

int main()
{
    int number, reverse = 0;

    cout << "Input a Number to Reverse and press Enter: ";
    // Taking Input Number in variable number
    cin >> number;

    while (number != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + number % 10;
        number = number / 10;
    }
    cout << "New Reversed Number is:  " << reverse;
    return 0;
}