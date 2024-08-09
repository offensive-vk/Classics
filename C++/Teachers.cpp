#include <iostream>
#include <cstdio>
#include <conio.h>
#include <string>
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

class AbstractHumanActions {
public:
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

class HumanActions: public AbstractHumanActions {
private:
    HumanActions() { /** Default Constructor */ }
    ~HumanActions() { /** Default Destructor */ }
};

template <class Gender> class Human: public HumanActions {
public:
    Human() { /** Default Constructor */ }
    std::string name;
    std::string age;
    std::string gender;
    Human(const std::string& n, const std::string& a, const std::string& g) { 
        std::this_thread::sleep_for(std::chrono::seconds(1));
        this->name = n;
        this->age = a;
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
    template <typename T = Gender> Human<T> displayDetails(const Human<T>& H) noexcept {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Human Name : " << H.name << std::endl;
        std::cout << "Human Age : " << H.age << std::endl;
        std::cout << "Human Gender : " << H.getGender() << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        return H;
    }
    ~Human() { }
    protected:
    inline void breath() const noexcept override {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Human is breathing now." ;
    }
};

class MaleTeacher : public Human<Male> {
public:
    MaleTeacher() { /** Default Constructor */}
    ~MaleTeacher() { /** Default Destructor */}

};

class FemaleTeacher : public Human<Female> {
public: 
    FemaleTeacher() { /** Default Constructor */ }
    ~FemaleTeacher() { /** Default Destructor */ }

};

typedef struct {
    std::string name;
    std::string gender;
    std::string age;
} UserData;

int main(int argc, char const *argv[]) {

    auto Manish = std::make_unique<Human<Male>>("Manish", "26", "Male");
    std::vector<std::unique_ptr<Human<Male>>> MaleList = {};
    std::vector<std::unique_ptr<Human<Female>>> FemaleList = {};

    std::vector<UserData> List = {
        {"User No.1", "10", "Male"},
        {"User No.2", "11", "Female"},
        {"User No.3", "32", "Female"},
        {"User No.4", "67", "Male"},
        {"User No.5", "30", "Female"},
        {"User No.0", "40", "Male"},
    };    
    for(const auto& H: List) {
        if(H.gender == "Male") {
            MaleList.push_back(std::make_unique<Human<Male>>(H.name, H.age, H.gender));
        }
        if(H.gender == "Female") {
            FemaleList.push_back(std::make_unique<Human<Female>>(H.name, H.age, H.gender));
        }
    }

    for(size_t c = 0; c < FemaleList.size(); ++c) {
        std::cout << FemaleList[c]->name << std::endl;
    }
    std::cout << std::endl;

    return 0;
}