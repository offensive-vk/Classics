#include <iostream>
#include <string>

// Unscoped enum
enum Color {
    RED,
    GREEN,
    BLUE
};

// Scoped enum
enum class Direction {
    NORTH,
    EAST,
    SOUTH,
    WEST
};

// Function to print color using unscoped enum
void printColor(Color color) {
    switch (color) {
        case RED:
            std::cout << "Color: Red" << std::endl;
            break;
        case GREEN:
            std::cout << "Color: Green" << std::endl;
            break;
        case BLUE:
            std::cout << "Color: Blue" << std::endl;
            break;
        default:
            std::cout << "Unknown color" << std::endl;
            break;
    }
}

// Function to print direction using scoped enum
void printDirection(Direction direction) {
    switch (direction) {
        case Direction::NORTH:
            std::cout << "Direction: North" << std::endl;
            break;
        case Direction::EAST:
            std::cout << "Direction: East" << std::endl;
            break;
        case Direction::SOUTH:
            std::cout << "Direction: South" << std::endl;
            break;
        case Direction::WEST:
            std::cout << "Direction: West" << std::endl;
            break;
        default:
            std::cout << "Unknown direction" << std::endl;
            break;
    }
}

int main() {
    // Using unscoped enum
    Color myColor = RED;
    printColor(myColor);

    myColor = BLUE;
    printColor(myColor);

    // Using scoped enum
    Direction myDirection = Direction::NORTH;
    printDirection(myDirection);

    myDirection = Direction::WEST;
    printDirection(myDirection);

    // Converting scoped enum to underlying integer type
    int directionValue = static_cast<int>(Direction::SOUTH);
    std::cout << "Integer value of Direction::SOUTH: " << directionValue << std::endl;

    return 0;
}
