#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype> // For character manipulation

using namespace std;

// Function to convert a string to uppercase
string toUpper(string str) {
    string result = str;
    for (char &c : result) {
        c = toupper(c);
    }
    return result;
}

// Function to check if a string is a palindrome (ignoring case and spaces)
bool isPalindrome(string str) {
    string cleanStr = "";
    for (char c : str) {
        if (isalnum(c)) { // Keep only alphanumeric characters
            cleanStr += tolower(c); // Convert to lowercase
        }
    }
    string reversedStr = cleanStr;
    reverse(reversedStr.begin(), reversedStr.end());
    return cleanStr == reversedStr;
}

// Function to count the frequency of each letter in a string
void countLetterFrequency(string str) {
    vector<int> frequencies(26, 0); // Initialize counts to 0 for each letter (a-z)

    for (char c : str) {
        if (isalpha(c)) {
            char lowerC = tolower(c);
            frequencies[lowerC - 'a']++;
        }
    }

    cout << "Letter Frequencies:\n";
    for (int i = 0; i < 26; ++i) {
        if (frequencies[i] > 0) {
            cout << (char)('a' + i) << ": " << frequencies[i] << endl;
        }
    }
}



int main() {
    cout << "\nWelcome to the String Manipulation Program!\n";

    int choice;
    do {
        cout << "\nChoose an option:\n";
        cout << "1. Convert String to Uppercase\n";
        cout << "2. Check if String is a Palindrome\n";
        cout << "3. Count Letter Frequencies\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin.ignore(); // Clear the newline character from previous input
        cin >> choice;
        cin.ignore(); // Clear the newline character from previous input


        switch (choice) {
            case 1: {
                string inputString;
                cout << "Enter a string: ";
                getline(cin, inputString); // Use getline to handle spaces
                cout << "Uppercase: " << toUpper(inputString) << endl;
                break;
            }
            case 2: {
                string inputString;
                cout << "Enter a string: ";
                getline(cin, inputString);
                if (isPalindrome(inputString)) {
                    cout << "\"" << inputString << "\" is a palindrome.\n";
                } else {
                    cout << "\"" << inputString << "\" is not a palindrome.\n";
                }
                break;
            }
            case 3: {
                string inputString;
                cout << "Enter a string: ";
                getline(cin, inputString);
                countLetterFrequency(inputString);
                break;
            }
            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}