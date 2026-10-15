
// 9. Delete the first node of a singly linked list

#include <iostream>
using namespace std;

// Define the structure of a node
struct node {
    int data;       // Stores the data
    node* next;     // Stores the address of the next node
};

// Function to delete the first node
void deleteFirst(node*& head) {

    // Check whether the linked list is empty
    if (head == NULL) {
        cout << "Linked list is empty. Nothing to delete.\n";
        return;
    }

    // Store the address of the first node temporarily
    node* temp = head;

    // Move head to the second node
    head = head->next;

    // Delete the original first node
    delete temp;

    cout << "First node deleted successfully.\n";
}

// Function to display the linked list
void display(node* head) {

    // Start traversal from the first node
    node* temp = head;

    // Visit each node until NULL is reached
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main() {

    // Create three nodes dynamically
    node* first = new node();
    node* second = new node();
    node* third = new node();

    // Assign data to each node
    first->data = 10;
    second->data = 20;
    third->data = 30;

    // Connect the nodes to form a linked list
    first->next = second;
    second->next = third;
    third->next = NULL;

    // Head points to the first node
    node* head = first;

    // Display the list before deletion
    cout << "Before deletion: ";
    display(head);

    // Delete the first node
    deleteFirst(head);

    // Display the list after deletion
    cout << "After deletion: ";
    display(head);

    // Release the remaining dynamically allocated nodes
    while (head != NULL) {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
/*Before deletion:
 10 -> 20 -> 30 -> NULL
First node deleted successfully.
After deletion: 20 -> 30 -> NULL*/