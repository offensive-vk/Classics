#include <iostream>
#include <iomanip> // for std::setprecision

int main() {
    std::string name;
    int age;
    double gpa;

    // Debug: Starting the program
    std::cout << "[DEBUG] Program started." << std::endl;

    // Prompt the user for their name
    std::cout << "[DEBUG] Prompting for name." << std::endl;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "[DEBUG] Name entered: " << name << std::endl;

    // Prompt the user for their age
    std::cout << "[DEBUG] Prompting for age." << std::endl;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "[DEBUG] Age entered: " << age << std::endl;

    // Prompt the user for their GPA
    std::cout << "[DEBUG] Prompting for GPA." << std::endl;
    std::cout << "Enter your GPA: ";
    std::cin >> gpa;
    std::cout << "[DEBUG] GPA entered: " << gpa << std::endl;

    // Display the formatted output
    std::cout << "[DEBUG] Displaying the formatted output." << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "GPA: " << std::fixed << std::setprecision(2) << gpa << std::endl;
    
    // Debug: Ending the program
    std::cout << "[DEBUG] Program ended." << std::endl;

    return 0;
}