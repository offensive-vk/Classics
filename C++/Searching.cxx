#include <iostream>

using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

// Iterative search implementation
bool searchIterative(Node* head, int value) {
    if (head == nullptr) {
        return false; // List is empty
    }

    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) {
            return true; // Value found
        }
        current = current->next;
    }

    return false; // Value not found
}

// Recursive search implementation
bool searchRecursive(Node* head, int value) {
    if (head == nullptr) {
        return false; // Base case: List is empty
    }

    if (head->data == value) {
        return true; // Value found
    }

    return searchRecursive(head->next, value); // Continue searching in the remaining list
}

// Function to traverse the linked list and print its contents
void traverse(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = new Node(5);
    head->next = new Node(3);
    head->next->next = new Node(1);
    head->next->next->next = new Node(2);

    cout << "Linked List: ";
    traverse(head);

    int valueToSearch = 3;
    if (searchIterative(head, valueToSearch)) {
        cout << valueToSearch << " found in the list (iterative search)." << endl;
    } else {
        cout << valueToSearch << " not found in the list (iterative search)." << endl;
    }

    valueToSearch = 7;
    if (searchRecursive(head, valueToSearch)) {
        cout << valueToSearch << " found in the list (recursive search)." << endl;
    } else {
        cout << valueToSearch << " not found in the list (recursive search)." << endl;
    }

    return 0;
}
