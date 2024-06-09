#include <iostream>
#include <vector>
#include <cstddef>
#include <memory>
using namespace std;
#define MAX_LENGTH 1000;

// Function to display the elements of an array
void display(const vector<int>& arr) {
    cout << "Array elements: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Main execution.
int main(void) {
  int *arr = new int[MAX_LENGTH];
  
  std::vector<int> vec = {14, 54, 12, 22, 45, 99, 32};
  std::vector<char> names = {"Jack", "Roy", "Manish", "Claire", "Michael"};
  display(vec);
  display(names);

  std::cout << " The End " << std::endl;
  return 0;
}
