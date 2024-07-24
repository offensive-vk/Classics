/**These are the various methods by which can display output to console without using old school methods. */
// You can use the write system call to print data to standard output.
#include <unistd.h>
#include <string.h>
inline void first() {
    const char *message = "Hello, World!\n";
    write(STDOUT_FILENO, message, strlen(message));
}

// These are standard output streams for error messages and logging, respectively.
#include <iostream>
inline void second() {
    std::cerr << "This is an error message" << std::endl;
    std::clog << "This is a log message" << std::endl;
}

// You can write to a string stream, which allows you to format strings in memory before outputting them.
#include <sstream>
#include <string>
#include <iostream>
inline void third() {

    std::ostringstream oss;
    oss << "Hello, World!";
    std::string output = oss.str();
    std::cout << output << std::endl; // Just for demonstration, normally you avoid using cout here
}

// You can write to a file instead of the console.
#include <fstream>
#include <string>
inline void fourth() {
    std::ofstream outFile("output.txt");
    if (outFile.is_open()) {
        outFile << "Hello, World!" << std::endl;
        outFile.close();
    }
}