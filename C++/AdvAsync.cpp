#include <iostream>
#include <future>
#include <unistd.h>
#include <vector>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <bits/c++io.h>

typedef struct {
    std::string name;
    std::string gender;
    int age;
} UserData;

template <class T> inline UserData getInput() {
    
    std::string name;
    std::string gender; 
    int age;

    std::cout << "Enter Your Name: " << std::endl;
    std::cin >> name;
    std::cout << "Enter Your Gender: " << std::endl;
    std::cin >> gender;
    std::cout << "Enter Your Age: " << std::endl;
    std::cin >> age;
    return {
        name, gender, age
    };

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
    // *******************************
    std::cout << "\n\n*** Program Executing ***" << std::endl;

    // Sample data input
    std::vector<int> arr {58,79,51,15,13};
    std::future<int> getSum = std::async(std::launch::async, vectorSum, arr);
    std::cout << "Sum of Vector is. " << getSum.get();
    std::cout << "\n ============= \n";
    std::future<UserData> data = std::async(std::launch::async, getInput<UserData>);
    std::cout << "\nUsername: " << data.get().name;
    std::cout << "\nGender: " << data.get().gender;
    std::cout << "\nAge: " << data.get().age;

    // *******************************
    std::cout << "\n\n*** Program Terminated ***" << std::endl;
    return 0;
}