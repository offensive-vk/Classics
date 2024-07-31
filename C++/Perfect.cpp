#include <iostream>
#include <conio.h>
#include <unistd.h> 

using namespace std;

int main(void) {

    int i = 1, u = 1, sum = 0;
    while (i <= 500) { 
        // start of first loop.

        while (u <= 500)
        { // start of second loop.
            if (u < i)
            {
                if (i % u == 0)
                    sum = sum + u;
            }

            u++;
        } // End of second loop

        if (sum == i) {
            sleep(2);
            cout << i << " is a perfect number." << "\n";
        }

        i++;
        u = 1;
        sum = 0;
    } // End of First loop

    getch();
    return 0;
}