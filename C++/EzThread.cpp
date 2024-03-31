#include <iostream>
#include <thread>

void function_1() {
    std::cout << "Function 1 has started\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Function 1 has ended\n";
}

void function_2() {
    std::cout << "Function 2 has started\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Function 2 has ended\n";
}

int main() {
    std::thread t1(function_1);
    std::thread t2(function_2);

    t1.join();
    t2.join();

    return 0;
}
