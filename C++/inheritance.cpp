#include <iostream>
#include <conio.h>

// Base class
class Vehicle {
public:
    Vehicle() {
        std::cout << "Vehicle Constructor" << std::endl;
    }

    void startEngine() {
        std::cout << "Engine started" << std::endl;
    }
};

// Single inheritance
class Car : public Vehicle {
public:
    Car() {
        std::cout << "Car Constructor" << std::endl;
    }

    void drive() {
        std::cout << "Car is being driven" << std::endl;
    }
};

// Multilevel inheritance
class SportsCar : public Car {
public:
    SportsCar() {
        std::cout << "SportsCar Constructor" << std::endl;
    }

    void accelerate() {
        std::cout << "SportsCar is accelerating" << std::endl;
    }
};

// Hierarchical inheritance
class Motorcycle : public Vehicle {
public:
    Motorcycle() {
        std::cout << "Motorcycle Constructor" << std::endl;
    }

    void ride() {
        std::cout << "Motorcycle is being ridden" << std::endl;
    }
};

int main() {
    std::cout << "Single Inheritance:" << std::endl;
    Car myCar;
    myCar.startEngine();
    myCar.drive();
    std::cout << std::endl;

    std::cout << "Multilevel Inheritance:" << std::endl;
    SportsCar mySportsCar;
    mySportsCar.startEngine();
    mySportsCar.drive();
    mySportsCar.accelerate();
    std::cout << std::endl;

    std::cout << "Hierarchical Inheritance:" << std::endl;
    Motorcycle myMotorcycle;
    myMotorcycle.startEngine();
    myMotorcycle.ride();
    std::cout << std::endl;

    return 0;
}
