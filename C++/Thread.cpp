#include <iostream>
#include <thread>
#include <vector>

void printThreadID(int id) {
    std::cout << "Thread ID: " << std::this_thread::get_id() << ", Function Argument: " << id << std::endl;
}

void printThreadIDAndJoin(int id, std::vector<std::thread>& threads) {
    std::cout << "Thread ID: " << std::this_thread::get_id() << ", Function Argument: " << id << std::endl;
    threads[id].join();
}

int main() {
    std::vector<std::thread> threads;

    // Launching threads
    for (int i = 0; i < 5; i++) {
        threads.push_back(std::thread(printThreadID, i));
    }

    // Joining threads
    for (auto& thread : threads) {
        thread.join();
    }

    // Launching threads with join
    for (int i = 0; i < 5; i++) {
        threads.push_back(std::thread(printThreadIDAndJoin, i, std::ref(threads)));
    }

    // Joining threads with join
    for (auto& thread : threads) {
        thread.join();
    }

    return 0;
}