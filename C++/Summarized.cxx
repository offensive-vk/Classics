#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <exception>

// Base class
class Person {
public:
    Person(const std::string& name, int age) : name(name), age(age) {}
    virtual void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
    virtual ~Person() {}

protected:
    std::string name;
    int age;
};

// Derived class
class Student : public Person {
public:
    Student(const std::string& name, int age, double gpa) 
        : Person(name, age), gpa(gpa) {}
    void display() const override {
        std::cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << std::endl;
    }

private:
    double gpa;
};

// Template function
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Function to demonstrate exception handling
void mayThrow(bool shouldThrow) {
    if (shouldThrow) {
        throw std::runtime_error("An error occurred!");
    }
}

int main() {
    // Demonstrate basic input/output
    std::cout << "Enter your name: ";
    std::string userName;
    std::cin >> userName;
    
    std::cout << "Enter your age: ";
    int userAge;
    std::cin >> userAge;
    
    std::cout << "Enter your GPA: ";
    double userGPA;
    std::cin >> userGPA;

    // Use of class and inheritance
    Student student(userName, userAge, userGPA);
    student.display();

    // Use of STL container and algorithm
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "Original numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    std::reverse(numbers.begin(), numbers.end());
    std::cout << "Reversed numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Use of template function
    std::cout << "Sum of 3 and 4: " << add(3, 4) << std::endl;
    std::cout << "Sum of 3.5 and 4.5: " << add(3.5, 4.5) << std::endl;

    // Exception handling
    try {
        mayThrow(true);
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}