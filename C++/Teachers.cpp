#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <memory>
#include <thread>
#include <chrono>
#include <unistd.h>
#include <type_traits>

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
template <class Gender> class Human {
public:
    std::string name;
    unsigned int age;
    std::string gender;
    Human(const std::string& n, const unsigned int& a, const std::string& g) { 
        std::this_thread::sleep_for(std::chrono::seconds(1.5));
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
    template <typename T = Male || Female> constexpr Human<T> displayDetails(const Human<T>& H) noexcept const override {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Human Name : " << H.name<< std::endl;
        std::cout << "Human Age : " << H.age << std::endl;
        std::cout << "Human Gender : " << H.getGender() << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        return H;
    }
    ~Human() { }
};

class MaleTeacher : public Human<Male> {

};
class FemaleTeacher : public Human<Female> {

};

int main(int argc, char const *argv[]) {
    /** Actual Execution */
    auto Manish = std::make_unique<Human<Male>>("Manish", 26, "Male");
    Human<Male> *Raj = new Human<Male>("Raj", 90, "Male");
    auto X = Manish->displayDetails<Male>(&Manish);
    return 0;
}