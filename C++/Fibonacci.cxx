#include <iostream>
using namespace std;
int main()
{
    int range, first = 0, second = 1, fibonicci = 0;
    cout << "Enter Range for Terms of Fibonacci Sequence: ";
    cin >> range;
    cout << "Fibonicci Series upto " << range << " Terms " << endl;
    for (int c = 0; c < range; c++)
    {
        if (c <= 1)
            fibonicci = c;
        else
        {
            fibonicci = first + second;
            first = second;
            second = fibonicci;
        }
        cout << fibonicci << " ";
    }
    return 0;
}