#include <iostream>
#include <conio.h>

// Node class to represent elements in the linked list
template <class T>
class Node {
public:
    T data;
    Node* next;

    Node(T val) : data(val), next(nullptr) {}
};

// LinkedList class using generic programming
template <class T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList() : head(nullptr) {}

    // Function to add a new element to the end of the linked list
    void append(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node<T>* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to display the elements in the linked list
    void display() {
        Node<T>* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // Function to free the memory used by the linked list
    ~LinkedList() {
        while (head != nullptr) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    // Create a linked list of integers
    LinkedList<int> intList;
    intList.append(10);
    intList.append(20);
    intList.append(30);

    // Display the integer linked list
    std::cout << "Integer Linked List: ";
    intList.display();

    // Create a linked list of strings
    LinkedList<std::string> strList;
    strList.append("Hello");
    strList.append("World");
    strList.append("!");

    // Display the string linked list
    std::cout << "String Linked List: ";
    strList.display();

    return 0;
}
