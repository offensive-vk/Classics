#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <memory>
#include <unistd.h>

#define MAX 65535;
#define MIN 1;

struct Male {};
struct Female {};

class HumanActions {
    /** Basic Human Needs and Functions */
    virtual void breath() const = 0;
    virtual void eat() const = 0;
    virtual void drink() const = 0;
    virtual void sleep() const = 0;
    virtual void walk() const = 0;
    virtual void rest() const = 0;
    virtual void run() const = 0;
    virtual void bath() const = 0;
    virtual void wake() const = 0;
    virtual void stand() const = 0;
    virtual void sit() const = 0;
    virtual void fresh() const = 0;
    virtual void talk() const = 0;
    virtual void listen() const = 0;

};
template <class Gender> class Human: public HumanActions {
public:
    std::string name;
    unsigned int age;
    Gender gender;
    Human(const std::string& n, const unsigned int& a, Gender& g) { 
        _sleep(1000);
        this->age = a;
        this->name = n;
        this->gender = g;
        std::cout << "Spawned a New Human." << std::endl;
    }
    std::string getGender() const {
        if (std::is_same<Gender, Male>::value) {
            return "Male";
        } else if (std::is_same<Gender, Female>::value) {
            return "Female";
        } else {
            return "Unknown";
        }
    }
    ~Human() { }
};

class MaleTeacher : public Human<Male> {

};
class FemaleTeacher : public Human<Female> {

};

int main(int argc, char const *argv[]) {
    
    return 0;
}
