#include <iostream>
#include <conio.h>

int main(int argc, char **argv[]){
    std::cout << "Car : " << std::endl;
}

class Car{
    private:
    std::string make;
    std::string model;
    void startEngine()
    {
        std::cout << "Starting engine of " << this->make << this->model << std::endl;
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
    
    Car(std::string make, std::string model)
    {
        this->make = make;
        this->model = model;
    }
    
};