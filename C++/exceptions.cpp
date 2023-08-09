#include <iostream>
#include <stdexcept> 

int main()
{
    try
    {
        int numerator, denominator;
        std::cout << "Enter the numerator: ";
        std::cin >> numerator;

        std::cout << "Enter the denominator: ";
        std::cin >> denominator;

        if (denominator == 0)
        {
            throw std::runtime_error("Division by zero is not allowed.");
        }

        double result = static_cast<double>(numerator) / denominator;
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::exception &ex)
    {
        std::cerr << "Exception caught: " << ex.what() << std::endl;
    }
    return 0;
}
