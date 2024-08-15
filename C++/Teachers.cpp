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
    virtual void sit() const = 0;
    virtual void stand() const = 0;
    virtual void wake() const = 0;
    virtual void fresh() const = 0;
    virtual void bath() const = 0;
    virtual void talk() const = 0;
    virtual void listen() const = 0;

};

class HumanActions: public AbstractHumanActions {
public:
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
        std::cout << this->name << " is breathing now." ;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    inline void eat() const noexcept override {
        std::cout << this->name << " is eating now." ;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    inline void drink() const noexcept override {
        std::cout << this->name << " is drinking now." ;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    inline void sleep() const noexcept override {
        std::cout << this->name << " is sleeping now." ;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    inline void walk() const noexcept override {
        std::cout << this->name << " is walking now." ;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    inline void rest() const noexcept override {
        std::cout << this->name << " is resting now." ;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    inline void run() const noexcept override {
        std::cout << this->name << " is running now." ;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    inline void sit() const noexcept override {
        std::cout << this->name << " is siting now." ;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    inline void listen() const noexcept override {
        std::cout << this->name << " is listening now." ;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    inline void talk() const noexcept override {
        std::cout << this->name << " is talking now." ;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    inline void bath() const noexcept override {
        std::cout << this->name << " is bathing now." ;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    inline void fresh() const noexcept override {
        std::cout << this->name << " is busy freshing now." ;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    inline void wake() const noexcept override {
        std::cout << this->name << " is waking up now." ;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    inline void stand() const noexcept override {
        std::cout << this->name << " is standing now." ;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
};

class MaleTeacher : public Human<Male> {
public:
    MaleTeacher() { /** Default Constructor */}
    ~MaleTeacher() { /** Default Destructor */}
private:
    std::vector<std::string> Subjects = {0};
    int salary = 0;
    int bonus = 0;
    std::string Dept = "";
};

class FemaleTeacher : public Human<Female> {
public: 
    FemaleTeacher() { /** Default Constructor */ }
    ~FemaleTeacher() { /** Default Destructor */ }
private:
    std::vector<std::string> Subjects = {0};
    int salary = 0;
    int bonus = 0;
    std::string Dept = "";
};

typedef struct {
    std::string name;
    std::string gender;
    std::string age;
} UserData;

typedef struct {
    int dept;
    int user;
    int level;
} TeacherID;

int main(int argc, char const *argv[]) {

    auto Manish = std::make_unique<Human<Male>>("Manish", "26", "Male");
    std::vector<std::unique_ptr<Human<Male>>> MaleList = {};
    std::vector<std::unique_ptr<Human<Female>>> FemaleList = {};
    
    auto M = std::make_unique<MaleTeacher>("Teacher", 22, "Male");
    auto F = std::make_unique<FemaleTeacher>("Teacher", 20, "Female");
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
            std::cout << "Added a Male." << std::endl;
        }
        if(H.gender == "Female") {
            FemaleList.push_back(std::make_unique<Human<Female>>(H.name, H.age, H.gender));
            std::cout << "Added a Female." << std::endl;
        }
    }

    // for(size_t c = 0; c < FemaleList.size(); ++c) {
    //     std::cout << FemaleList[c]->name << std::endl;
    // }
    // std::cout << std::endl;
    // for(size_t c = 0; c < MaleList.size(); ++c) {
    //     std::cout << MaleList[c]->name << std::endl;
    // }
    std::cout << std::endl;

    return 0;
}