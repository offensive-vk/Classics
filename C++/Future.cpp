#include <iostream>
#include <future>

// Function to calculate the factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    // Create a promise to set the result of the calculation
    std::promise<int> promise;

    // Get a future associated with the promise
    std::future<int> future = promise.get_future();

    // Start a new thread to calculate the factorial
    std::thread calculation_thread([&promise]() {
        int result = factorial(5); // Calculate factorial of 5
        promise.set_value(result); // Set the result in the promise
    });

    // Wait for the future to become ready and retrieve the result
    int result = future.get();

    // Join the calculation thread
    calculation_thread.join();

    std::cout << "Factorial of 5 is: " << result << std::endl;

    return 0;
}