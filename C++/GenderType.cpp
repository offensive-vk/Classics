#include <iostream>
#include <string>
#include <memory>
#include <type_traits>

struct Male {};
struct Female {};
template <typename Gender> class Human {
public:
    std::string name;

    // Constructor
    Human(const std::string& n) : name(n) {}

    // Method to get the gender
    std::string getGender() const {
        if (std::is_same<Gender, Male>::value) {
            return "Male";
        } else if (std::is_same<Gender, Female>::value) {
            return "Female";
        } else {
            return "Unknown";
        }
    }
};
int main() {
    
    Human<Male> *Richard = new Human<Male>("Richard");
    Human<Female> *Alice = new Human<Female>("Alicia");

    std::cout << Richard->name << " is " << Richard->getGender() << std::endl;
    std::cout << Alice->name << " is " << Alice->getGender() << std::endl;

    delete Richard;
    delete Alice;

    return 0;
}
