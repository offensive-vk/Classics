#include <iostream>
#include <conio.h>
class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a generic shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main() {
    Shape* shape1 = new Shape();
    Shape* shape2 = new Circle();
    Shape* shape3 = new Square();
    
    shape1->draw();  // Calls Shape's draw()
    shape2->draw();  // Calls Circle's draw()
    shape3->draw();  // Calls Square's draw()
    
    delete shape1;
    delete shape2;
    delete shape3;
    
    return 0;
}
