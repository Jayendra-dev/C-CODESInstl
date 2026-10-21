//17. Find the middle node.

#include <iostream>
using namespace std;

// Structure of a node
struct Node {
    int data;       // Stores the value
    Node* next;     // Stores address of the next node
};

// Initially, the linked list is empty
Node* head = NULL;

// Function to insert a node at the end
void insertval() {
    int val;
    cout << "Enter value: ";
    cin >> val;

    // Create a new node dynamically
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    // If the list is empty, make this node the first node
    if (head == NULL) {
        head = newNode;
    } else {
        // Start from the first node
        Node* temp = head;

        // Move to the last node
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Connect the last node to the new node
        temp->next = newNode;
    }

    cout << "Node inserted successfully.\n";
}

// Function to display the linked list
void display() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;

    cout << "Linked List: ";

    // Traverse until the end of the list
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

// Function to find the middle node
void findMiddle() {
    if (head == NULL) {
        cout << "List is empty. No middle node.\n";
        return;
    }

    // Both pointers start from the first node
    Node* slow = head;
    Node* fast = head;

    // Slow moves one node; fast moves two nodes
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Slow points to the middle node
    cout << "Middle node: " << slow->data << "\n";
}

int main() {
    int ch;

    do {
        cout << "\n--- Linked List Menu ---\n";
        cout << "1. Insert node\n";
        cout << "2. Display list\n";
        cout << "3. Find middle node\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                insertval();
                break;

            case 2:
                display();
                break;

            case 3:
                findMiddle();
                break;

            case 4:
                cout << "Program terminated.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (ch != 4);

    return 0;
}
/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'level6Q17.exe'

--- Linked List Menu ---
1. Insert node
2. Display list
3. Find middle node
4. Exit
Enter choice: 1
Enter value: 1
Node inserted successfully.

--- Linked List Menu ---
1. Insert node
2. Display list
3. Find middle node
4. Exit
Enter choice: 1
Enter value: 2
Node inserted successfully.

--- Linked List Menu ---
1. Insert node
2. Display list
3. Find middle node
4. Exit
Enter choice: 1
Enter value: 3
Node inserted successfully.

--- Linked List Menu ---
1. Insert node
2. Display list
3. Find middle node
4. Exit
Enter choice: 2
Linked List: 1 -> 2 -> 3 -> NULL

--- Linked List Menu ---
1. Insert node
2. Display list
3. Find middle node
4. Exit
Enter choice: 3
Middle node: 2

--- Linked List Menu ---
1. Insert node
2. Display list
3. Find middle node
4. Exit
Enter choice: 4
Program terminated.*/