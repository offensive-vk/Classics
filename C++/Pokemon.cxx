#include <iostream>
#include <string>

class Pokemon {
private:
    std::string name;
    std::string type;
    int level;
    int health;

public:
    // Constructor
    Pokemon(std::string n, std::string t, int l) : name(n), type(t), level(l), health(100) {}

    // Getter methods
    std::string getName() const { return name; }
    std::string getType() const { return type; }
    int getLevel() const { return level; }
    int getHealth() const { return health; }

    // Setter method for health
    void setHealth(int h) { health = h; }

    // Method for attacking
    void attack(Pokemon &target) {
        std::cout << name << " is attacking " << target.getName() << "!\n";
        // Assume a simple damage calculation for demonstration
        int damage = level * 5;
        target.setHealth(target.getHealth() - damage);
        std::cout << target.getName() << " took " << damage << " damage.\n";
    }

    // Method to display Pokemon information
    void displayInfo() const {
        std::cout << "Name: " << name << "\n";
        std::cout << "Type: " << type << "\n";
        std::cout << "Level: " << level << "\n";
        std::cout << "Health: " << health << "\n";
    }
};

int main() {
    // Creating two Pokemon
    Pokemon pikachu("Pikachu", "Electric", 10);
    Pokemon charmander("Charmander", "Fire", 8);

    // Displaying Pokemon information
    pikachu.displayInfo();
    charmander.displayInfo();

    // Pikachu attacks Charmander
    pikachu.attack(charmander);

    // Displaying updated Pokemon information
    charmander.displayInfo();

    return 0;
}
