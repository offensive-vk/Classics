#include <iostream>
#include <cppcoro/async_scope.hpp>
#include <cppcoro/sync_wait.hpp>
#include <cppcoro/task.hpp>
#include <chrono>

// Simulated asynchronous function to fetch data
cppcoro::task<std::string> fetchData() {
    co_await std::chrono::seconds(2);
    co_return "Data fetched successfully";
}

// Define an async function to fetch and process data
cppcoro::task<void> fetchAndProcessData() {
    std::cout << "Fetching data..." << std::endl;

    try {
        std::string data = co_await fetchData();
        std::cout << "Received data: " << data << std::endl;
        std::cout << "Processing data..." << std::endl;
        co_await std::chrono::seconds(1); // Simulate further processing
        std::cout << "Data processing complete" << std::endl;
    } catch (const std::exception& error) {
        std::cerr << "Error: " << error.what() << std::endl;
    }
}

int main() {
    cppcoro::async_scope scope;
    auto task = fetchAndProcessData();
    cppcoro::sync_wait(task);
    return 0;
}
/**
  * 
  * Note: The example uses the CppCoro library, which you need to download and include in your project to compile successfully. You can find more information about CppCoro on its GitHub repository: cppcoro.
*/