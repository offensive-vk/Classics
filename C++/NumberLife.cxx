#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

// Function to generate a random password
string generatePassword(int length) {
    const string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+=-`~[]\{}|;':\",./<>?";
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, characters.size() - 1);

    string password = "";
    for (int i = 0; i < length; ++i) {
        password += characters[dist(gen)];
    }
    return password;
}

// Function to check if a number is prime (basic implementation)
bool isPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "\nWelcome to the Super Cool C++ Program!\n";

    int choice;
    do {
        cout << "\nChoose an option:\n";
        cout << "1. Generate a Random Password\n";
        cout << "2. Check if a Number is Prime\n";
        cout << "3. Sort a List of Numbers\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int length;
                cout << "Enter desired password length: ";
                cin >> length;
                string password = generatePassword(length);
                cout << "Generated Password: " << password << endl;
                break;
            }
            case 2: {
                int number;
                cout << "Enter a number to check for primality: ";
                cin >> number;
                if (isPrime(number)) {
                    cout << number << " is a prime number.\n";
                } else {
                    cout << number << " is not a prime number.\n";
                }
                break;
            }
            case 3: {
                int numCount;
                cout << "How many numbers do you want to sort? ";
                cin >> numCount;

                vector<int> numbers(numCount);
                cout << "Enter the numbers:\n";
                for (int i = 0; i < numCount; ++i) {
                    cin >> numbers[i];
                }

                sort(numbers.begin(), numbers.end()); // Using STL sort

                cout << "Sorted Numbers:\n";
                for (int num : numbers) {
                    cout << num << " ";
                }
                cout << endl;
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