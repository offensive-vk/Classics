#include <iostream>
#include <future>
#include <vector>
#include <numeric>
#include <chrono>

// Function to compute sum of elements in a vector asynchronously
int async_sum(const std::vector<int>& data) {
    return std::accumulate(data.begin(), data.end(), 0);
}

// Function to perform a time-consuming task asynchronously
void time_consuming_task() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Time-consuming task completed\n";
}

int main() {
    // Example 1: Using async to launch a task asynchronously and retrieve the result
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::future<int> future_sum = std::async(std::launch::async, async_sum, vec);
    std::cout << "Sum of vector elements: " << future_sum.get() << std::endl;

    // Example 2: Using promise and future to communicate between threads
    std::promise<void> promise_task;
    std::future<void> future_task = promise_task.get_future();
    std::thread t([&promise_task](){ time_consuming_task(); promise_task.set_value(); });
    future_task.wait(); // Wait for the task to complete
    t.join();

    // Example 3: Using std::future::wait_for to check if a task has completed within a timeout
    std::future<int> future_delayed_sum = std::async(std::launch::async, async_sum, vec);
    std::future_status status = future_delayed_sum.wait_for(std::chrono::seconds(1));
    if (status == std::future_status::ready) {
        std::cout << "Delayed sum of vector elements: " << future_delayed_sum.get() << std::endl;
    } else if (status == std::future_status::timeout) {
        std::cout << "Task did not complete within timeout\n";
    } else if (status == std::future_status::deferred) {
        std::cout << "Task is deferred\n";
    }

    return 0;
}
