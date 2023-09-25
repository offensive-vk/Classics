#include <iostream>
#include <list>

int main() {
    // Create an empty list
    std::list<int> myList;

    // Insert elements at the end of the list
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    // Insert elements at the front of the list
    myList.push_front(0);

    // Insert an element at a specific position
    std::list<int>::iterator it = myList.begin();
    std::advance(it, 2); // Move iterator to the third position
    myList.insert(it, 99);

    // Display the elements in the list
    std::cout << "List elements: ";
    for (const int& elem : myList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Remove elements from the list
    myList.pop_back();  // Remove the last element
    myList.pop_front(); // Remove the first element
    it = myList.begin();
    std::advance(it, 2); // Move iterator to the third position
    myList.erase(it);    // Remove the element at the third position

    // Display the modified list
    std::cout << "Modified List elements: ";
    for (const int& elem : myList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Check if the list is empty
    if (myList.empty()) {
        std::cout << "List is empty." << std::endl;
    } else {
        std::cout << "List is not empty." << std::endl;
    }

    // Get the size of the list
    std::cout << "Size of the list: " << myList.size() << std::endl;

    // Access elements by index (not recommended for lists)
    std::cout << "Element at index 1: " << myList.front() << std::endl;
    
    return 0;
}
