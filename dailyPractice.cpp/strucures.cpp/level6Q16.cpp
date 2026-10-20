
#include <iostream>
using namespace std;

// Structure of a linked list node
struct Node {
    int data;
    Node* next;
};

// Global head pointer points to the first node
Node* head = NULL;

// Function to insert a node at the end of the linked list
void insertEnd() {
    int val;

    cout << "Enter value to insert: ";
    cin >> val;

    // Create a new node
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    // If the list is empty, make the new node the head
    if (head == NULL) {
        head = newNode;
    } else {
        // Traverse to the last node
        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Link the last node to the new node
        temp->next = newNode;
    }

    cout << "Node inserted successfully.\n";
}

// Function to display the linked list
void display() {
    // Check whether the list is empty
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;

    cout << "List: ";

    // Traverse and print each node
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

// Function to reverse the linked list
void reverseList() {
    Node* prev = NULL;
    Node* current = head;
    Node* nextNode = NULL;

    // Reverse the links one node at a time
    while (current != NULL) {
        // Save the next node before changing the link
        nextNode = current->next;

        // Reverse the current node's link
        current->next = prev;

        // Move prev and current one step forward
        prev = current;
        current = nextNode;
    }

    // Update head to point to the new first node
    head = prev;

    cout << "Linked list reversed successfully.\n";
}

// Main function
int main() {
    int ch;

    do {
        cout << "\n------ REVERSE LINKED LIST ------\n";
        cout << "1. Insert at End\n";
        cout << "2. Display List\n";
        cout << "3. Reverse List\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        // Execute the operation selected by the user
        switch (ch) {
            case 1:
                insertEnd();
                break;

            case 2:
                display();
                break;

            case 3:
                reverseList();
                break;

            case 4:
                cout << "Exited successfully.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (ch != 4);

    return 0;
}
