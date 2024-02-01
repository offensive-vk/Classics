#include <iostream>
#include <conio.h>

class Car
{
private:
    std::string make;
    std::string model;
    void drive()
    {
        std::cout << this->make << " is being driven." << std::endl;
    }

public:
    int src;
    std::string getMake()
    {
        return this->make;
    }
    std::string getModel()
    {
        return this->model;
    }
    void startEngine()
    {
        std::cout << "Starting engine of " << this->make << this->model << std::endl;
    }

    Car(std::string make, std::string model)
    {
        this->make = make;
        this->model = model;
    }
};

int main(int argc, char **argv[])
{
    Car *car = new Car("Lamborghini", "LP700");

    std::cout << "Car Maker : " << car->getMake() << std::endl;
    std::cout << "Car Model : " << car->getModel() << std::endl;

    car->startEngine();
    return (0);
}