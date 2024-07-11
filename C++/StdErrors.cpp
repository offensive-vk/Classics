#include <iostream>
#include <stdexcept> // For standard exceptions
#include <exception> // For std::exception base class

// Custom exception class
class CustomException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Custom exception occurred";
    }
};

// Function to demonstrate various exceptions
void throwError(int errorType) {
    switch (errorType) {
        case 1:
            throw std::invalid_argument("Invalid argument exception");
        case 2:
            throw std::out_of_range("Out of range exception");
        case 3:
            throw std::runtime_error("Runtime error exception");
        case 4:
            throw CustomException();
        default:
            throw std::exception();
    }
}

int main() {
    std::cout << "Enter an error type (1-4): ";
    int errorType;
    std::cin >> errorType;

    try {
        throwError(errorType);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Caught std::invalid_argument: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Caught std::out_of_range: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught std::runtime_error: " << e.what() << std::endl;
    } catch (const CustomException& e) {
        std::cerr << "Caught CustomException: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught std::exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Caught an unknown exception" << std::endl;
    }

    std::cout << "Program ended" << std::endl;
    return 0;
}
