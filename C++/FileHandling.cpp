#include <iostream>
#include <fstream>
#include <string>

int main() {
    // 1. Opening a file for writing
    std::ofstream outFile("example.txt");
    if (!outFile) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    // 2. Writing to the file
    outFile << "Hello, World!" << std::endl;
    outFile << "This is a line of text." << std::endl;
    outFile.close();

    // 3. Opening a file for reading
    std::ifstream inFile("example.txt");
    if (!inFile) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    // 4. Reading from the file
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }
    inFile.close();

    // 5. Opening a file for appending
    std::ofstream appendFile("example.txt", std::ios::app);
    if (!appendFile) {
        std::cerr << "Error opening file for appending!" << std::endl;
        return 1;
    }

    // 6. Appending to the file
    appendFile << "Appending this line to the file." << std::endl;
    appendFile.close();

    // 7. Reading the entire file again to confirm the append
    inFile.open("example.txt");
    if (!inFile) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    std::cout << "\nContents of the file after appending:" << std::endl;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }
    inFile.close();

    // 8. Check if file exists
    std::ifstream checkFile("example.txt");
    if (checkFile) {
        std::cout << "\nFile exists." << std::endl;
        checkFile.close();
    } else {
        std::cout << "\nFile does not exist." << std::endl;
    }

    return 0;
}
