#include <iostream>
#include <vector>
#include <string>

class Kid {
private:
    std::string name;
    int age;

public:
    Kid(const std::string& name, int age) : name(name), age(age) {}

    std::string getInfo() {
        return name + " (" + std::to_string(age) + " years old)";
    }

    std::string gotoSchool() {
        return name + " going to School";
    }
};

class Husband;  // Forward declaration

class Wife {
private:
    std::string name;
    int age;
    std::vector<Kid> kids;
    Husband* husband;

public:
    Wife(const std::string& name, int age) : name(name), age(age), husband(nullptr) {}

    void marry(Husband& husband) {
        this->husband = &husband;
    }

    void addChild(const std::string& name, int age) {
        kids.emplace_back(name, age);
    }

    std::string getKidsInfo() {
        std::string info;
        for (const Kid& kid : kids) {
            if (!info.empty()) info += ", ";
            info += kid.getInfo();
        }
        return info;
    }

    std::string getInfo() {
        return name + " (Wife, " + std::to_string(age) + " years old)";
    }
};

class Husband {
private:
    std::string name;
    int age;
    Wife* wife;

public:
    Husband(const std::string& name, int age) : name(name), age(age), wife(nullptr) {}

    void marry(Wife& wife) {
        this->wife = &wife;
    }

    std::string getInfo() {
        if (wife) {
            return name + " (Husband, " + std::to_string(age) + " years old) - Married to " + wife->getInfo();
            // Change the arrow (->) to dot (.) here
        } else {
            return name + " (Husband, " + std::to_string(age) + " years old) - Single";
        }
    }
};

int main() {
    
    Wife wife("Sneha", 27);
    Husband husband("Madhav", 30);

    husband.marry(wife);
    wife.addChild("John", 5);
    wife.addChild("Clair", 3);

    std::cout << husband.getInfo() << std::endl;
    std::cout << "Children: " << wife.getKidsInfo() << std::endl;

    return 0;
}
