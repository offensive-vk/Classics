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

// Linked List class to manage the list
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the beginning of the list
    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // Function to insert a node at the end of the list
    void insertAtEnd(int data) {
        Node* newNode = new Node(data);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to delete a node with a specific value
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty. Deletion failed." << endl;
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;

        // Handle deletion of the head node
        if (temp != nullptr && temp->data == value) {
            head = temp->next;
            delete temp;
            return;
        }

        // Traverse the list to find the node
        while (temp != nullptr && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        // If node not found
        if (temp == nullptr) {
            cout << "Value not found in the list. Deletion failed." << endl;
            return;
        }

        // Delete the node
        prev->next = temp->next;
        delete temp;
    }

    // Function to traverse the linked list and print its contents
    void traverse() {
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
};

int main() {
    LinkedList list;

    list.insertAtBeginning(5);
    list.insertAtEnd(10);
    list.insertAtBeginning(2);
    list.insertAtEnd(15);

    cout << "Linked List after insertions: ";
    list.traverse();

    list.deleteNode(10);

    cout << "Linked List after deleting 10: ";
    list.traverse();

    return 0;
}
