/**
* Multithreading is the concurrent execution of multiple threads within a single process or program. 
* It improves the performance and efficiency of an application by allowing multiple tasks to be executed in parallel.
* In C++, multithreading support is available through the thread library introduced in the C++11 standard.
*/

/**
* The join() function in C++ is a member function of the std::thread class. 
* It is used to wait for the thread to finish its execution. When you call the join() function on a thread, 
* the calling thread (usually the main thread) will block and wait for the thread on which join() is called to finish its execution.
*/

#include <iostream>
#include <thread>
#include <unistd.h>

// Thread without arguments.
void my_function() {
    std::cout << "This function is executing in a separate thread" << std::endl;
    sleep(3);
}

// Thread with arguments
void print_sum(int a, int b) {
    sleep(2);
    std::cout << "The sum is: " << a + b << std::endl;
}

int main() {
    std::cout << "Program Executing !" << std::endl;
    
    // Without args
    std::thread t1(my_function);
    t1.join(); 

    // With args
    std::thread t2(print_sum, 50, 50);
    t2.join();

    std::cout << "Program Finished !" << std::endl;
    return 0;
}