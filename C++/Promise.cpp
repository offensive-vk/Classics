#include <iostream>
#include <thread>
#include <future>

// Simulated asynchronous task that takes time to compute
void compute_task(std::promise<int>& promise, int input) {
    // Simulating some time-consuming computation
    std::this_thread::sleep_for(std::chrono::seconds(2));

    // Computing the result
    int result = input * 2;

    // Fulfilling the promise with the result
    promise.set_value(result);
}

void syncTask() {
    std::cout << "Doing an Sync Task.\n" ; 
}
int main() {
    // Create a promise to produce an int value
    std::promise<int> promise;

    // Get a future associated with the promise
    std::future<int> future = promise.get_future();

    // Launch a thread to perform the asynchronous computation
    int input = 5;
    std::thread t(compute_task, std::ref(promise), input);

    // Do some other work while waiting for the result
    std::cout << "Doing some other work..." << std::endl;

    // Do a sync task
    syncTask();

    // Wait for the result from the asynchronous task
    int result = future.get();

    // Output the result
    std::cout << "Result received: " << result << std::endl;

    // Join the thread
    t.join();

    return 0;
}
