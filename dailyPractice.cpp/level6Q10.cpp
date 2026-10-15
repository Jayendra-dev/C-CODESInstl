
// 10. Delete the last node of a singly linked list

#include <iostream>
using namespace std;

// Define the structure of a node
struct node {
    int data;       // Stores the data
    node* next;     // Stores the address of the next node
};

// Function to delete the last node
void deleteLast(node*& head) {

    // Case 1: Check whether the linked list is empty
    if (head == NULL) {
        cout << "Linked list is empty. Nothing to delete.\n";
        return;
    }

    // Case 2: If only one node exists
    if (head->next == NULL) {
        delete head;       // Delete the only node
        head = NULL;       // Make head NULL
        cout << "Last node deleted successfully.\n";
        return;
    }

    // Create a pointer to traverse the linked list
    node* temp = head;

    // Move until temp points to the second-last node
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    // Delete the last node and disconnect it
    delete temp->next;
    temp->next = NULL;

    cout << "Last node deleted successfully.\n";
}

// Function to display the linked list
void display(node* head) {

    // Start traversal from the first node
    node* temp = head;

    // Print each node until NULL is reached
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

    // Assign values to the nodes
    first->data = 10;
    second->data = 20;
    third->data = 30;

    // Connect the nodes
    first->next = second;
    second->next = third;
    third->next = NULL;

    // Head points to the first node
    node* head = first;

    // Display the original linked list
    cout << "Before deletion: ";
    display(head);

    // Delete the last node
    deleteLast(head);

    // Display the updated linked list
    cout << "After deletion: ";
    display(head);

    // Free the memory occupied by remaining nodes
    while (head != NULL) {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
/*Before deletion: 10 -> 20 -> 30 -> NULL
Last node deleted successfully.
After deletion: 10 -> 20 -> NULL*/