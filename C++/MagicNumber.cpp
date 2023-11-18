#include <iostream>
#include <conio.h>
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int magicTrick(int originalNumber) {
    int reversedNumber = reverseNumber(originalNumber);
    int difference = abs(originalNumber - reversedNumber);
    int reversedDifference = reverseNumber(difference);

    int result = difference + reversedDifference;
    return result;
}

int main() {
    int originalNumber = 234;
    std::cout << "Choose your three digit number : " << std::endl;
    std::cin >> originalNumber;
    int result = magicTrick(originalNumber);

    std::cout << "Original Number: " << originalNumber << std::endl;
    std::cout << "Reversed Number: " << reverseNumber(originalNumber) << std::endl;
    std::cout << "Difference: " << abs(originalNumber - reverseNumber(originalNumber)) << std::endl;
    std::cout << "Reversed Difference: " << reverseNumber(abs(originalNumber - reverseNumber(originalNumber))) << std::endl;
    std::cout << "Magic Number : " << result << std::endl;

    return 0;
}
