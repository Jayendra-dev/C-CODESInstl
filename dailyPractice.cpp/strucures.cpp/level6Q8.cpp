//
#include <iostream>
using namespace std;

// Structure of a node
struct node {
    int data;       // Stores the value of the node
    node* next;     // Stores the address of the next node
};

// Function to insert a node at a particular position
void insertNode(node*& head, int val, int pos) {

    // Step 1: Create a new node
    node* newNode = new node();

    // Step 2: Store the value and initialize next
    newNode->data = val;
    newNode->next = NULL;

    // Step 3: If position is invalid
    if (pos < 1) {
        cout << "Invalid position!" << endl;
        delete newNode;
        return;
    }

    // Step 4: Insert at the beginning (position 1)
    if (pos == 1) {
        newNode->next = head;  // Link new node to old first node
        head = newNode;        // Update head
        return;
    }

    // Step 5: Move to the node just before the required position
    node* temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // Step 6: Check whether the position is valid
    if (temp == NULL) {
        cout << "Invalid position!" << endl;
        delete newNode;
        return;
    }

    // Step 7: Connect the new node to the next node
    newNode->next = temp->next;

    // Step 8: Connect the previous node to the new node
    temp->next = newNode;
}

// Function to display the linked list
void display(node* head) {
    node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {
    node* head = NULL;  // Initially, the list is empty

    // Create a linked list: 10 -> 20 -> 30 -> NULL
    insertNode(head, 10, 1);
    insertNode(head, 20, 2);
    insertNode(head, 30, 3);

    cout << "Original linked list: ";
    display(head);

    // Insert 15 at position 2
    insertNode(head, 15, 2);

    cout << "After insertion: ";
    display(head);

    return 0;
}
/*Original linked list: 10 -> 20 -> 30 -> NULL
After insertion: 10 -> 15 -> 20 -> 30 -> NULL*/