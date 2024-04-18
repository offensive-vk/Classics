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

// Function to swap data of two nodes
void swap(Node* node1, Node* node2) {
    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}

// Function to perform Bubble Sort on a linked list
void bubbleSort(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return; // List is empty or has only one element, nothing to sort
    }

    bool swapped;
    Node* current;
    Node* next;

    // Outer loop to perform multiple passes
    for (int i = 0; head != nullptr; i++) {
        swapped = false;
        current = head;
        next = head->next;

        // Inner loop to compare adjacent nodes
        while (next != nullptr) {
            if (current->data > next->data) {
                swap(current, next);
                swapped = true;
            }
            current = next;
            next = next->next;
        }

        // If we haven't made a single swap in an inner loop iteration, the list is sorted
        if (!swapped) {
            break;
        }

        // Move head to the next node (already largest element) for next pass
        head = head->next;
    }
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

    cout << "Linked List before sorting: ";
    traverse(head);

    bubbleSort(head);

    cout << "Linked List after sorting: ";
    traverse(head);

    return 0;
}
