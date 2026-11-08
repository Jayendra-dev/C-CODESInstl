// 10. Implement a linked list using a Node structure.
    
#include <iostream>
using namespace std;

// Structure of a Node
struct Node {
    int data;
    Node* next;
};

// Initially, linked list is empty
Node* head = NULL;

// Function to insert a node at the end
void insertNode() {

    int value;

    cout << "Enter data: ";
    cin >> value;

    // Create a new node
    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = NULL;

    // If list is empty
    if (head == NULL) {
        head = newNode;
    }
    else {
        Node* temp = head;

        // Move to the last node
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "Node inserted successfully!\n";
}

// Function to delete a node
void deleteNode() {

    if (head == NULL) {
        cout << "Linked List is Empty!\n";
        return;
    }

    int value;

    cout << "Enter value to delete: ";
    cin >> value;

    Node* temp = head;
    Node* prev = NULL;

    // Search for the node
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Element not found!\n";
        return;
    }

    // If first node is deleted
    if (prev == NULL) {
        head = head->next;
    }
    else {
        prev->next = temp->next;
    }

    delete temp;

    cout << "Node deleted successfully!\n";
}

// Function to display linked list
void display() {

    if (head == NULL) {
        cout << "Linked List is Empty!\n";
        return;
    }

    Node* temp = head;

    cout << "Linked List: ";

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

// Function to search an element
void searchNode() {

    int value;
    int position = 1;

    cout << "Enter element to search: ";
    cin >> value;

    Node* temp = head;

    while (temp != NULL) {

        if (temp->data == value) {
            cout << "Element found at position "
                 << position << endl;
            return;
        }

        temp = temp->next;
        position++;
    }

    cout << "Element not found!\n";
}

// Main function
int main() {

    int choice;

    do {

        cout << "\n===== LINKED LIST MENU =====\n";
        cout << "1. Insert Node\n";
        cout << "2. Delete Node\n";
        cout << "3. Display Linked List\n";
        cout << "4. Search Node\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                insertNode();
                break;

            case 2:
                deleteNode();
                break;

            case 3:
                display();
                break;

            case 4:
                searchNode();
                break;

            case 5:
                cout << "Program Terminated.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}

//output:
/*===== LINKED LIST MENU =====
1. Insert Node
2. Delete Node
3. Display Linked List
4. Search Node
5. Exit
Enter your choice: */