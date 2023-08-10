#include <iostream>
#include <conio.h>

class Drawable {
public:
    virtual void draw() = 0;  // Pure virtual function, making this class abstract
};

class Circle : public Drawable {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Drawable {
public:
    void draw() override {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main(int argc, char* argv[]) {
    Circle circle;
    Square square;

    Drawable* shapes[2];
    shapes[0] = &circle;
    shapes[1] = &square;

    for (int i = 0; i < 2; ++i) {
        shapes[i]->draw();  
    }
    return 0;
}
