#include <iostream>
#include <future>
#include <unistd.h>
#include <vector>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <bits/c++io.h>

void getInput(std::string name, std::string gender, unsigned int age) {

    std::cout << "Enter Your Name: " << std::endl;
    std::cin >> name;
    std::cout << "Enter Your Gender: " << std::endl;
    std::cin >> gender;
    std::cout << "Enter Your Age: " << std::endl;
    std::cin >> age;
}

void wait(std::chrono::seconds waiting) {
    std::this_thread::sleep_for(waiting);
}

int vectorSum(const std::vector<int>& vec) {
    std::cout << "Started Processing";
    for(size_t c = 0; c < 5; ++c) {
        std::cout << "..." ;
        wait((std::chrono::seconds)1);
    }
    std::cout << std::endl;
    if(vec.size() > 1) return std::accumulate(vec.begin(), vec.end(), 0);
}
int main(void) noexcept {
    std::cout << "\n\n*** Programs Executing ***" << std::endl;

    std::vector<int> arr {5,7,1,1,1};

    // std::cout << vectorSum(arr) << std::endl;
    std::future<int> getSum = std::async(std::launch::async, vectorSum, arr);
    std::cout << "Sum of Vector is. " << getSum.get();
    std::cout << "\n\n*** Programs Terminated ***" << std::endl;
    return 0;
}