#include <iostream>
#include <algorithm>
#define ROUTE_STATUS "ENABLED"
#define ROUTE_ID "S9G8APC"

enum COLORS {
    RED,
    GREEN,
    BLUE, 
    PURPLE,
    WHITE
};

typedef enum {
    REG_ID = 88491,
    USER_ID = 589540
} ID;

int main(int argc, char const *argv[]) {
    std::cout << "== MAIN FUNCTION == " << std::endl;
    std::cout << COLORS::BLUE << std::endl;
    
    ID user;
    COLORS color;

    std::cout << "Route ID: " << ROUTE_ID << std::endl;
    std::cout << "Route STATUS: " << ROUTE_STATUS << std::endl;
    return 0;
}