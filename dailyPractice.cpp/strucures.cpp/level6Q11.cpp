//11.Delete a node containing a particular value.

#include <iostream>   // Allows us to use cin and cout
using namespace std;  // So we don't need to write std::cout

// Structure of a node
struct node {
    int data;       // Stores the value, such as 10 or 20
    node* next;     // Stores the address of the next node
};

// Function to insert a new node at the end of the list
// node*& head means we can change the original head pointer
void insert(node*& head, int val) {

    // Create a new node in dynamic memory
    node* newNode = new node();

    newNode->data = val;       // Put the value inside the node
    newNode->next = nullptr;   // Initially, it points to nothing

    // If the list is empty, this node becomes the first node
    if (head == nullptr) {
        head = newNode;
        return;                // Stop this function
    }

    // Start from the first node
    node* temp = head;

    // Move forward until we reach the last node
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Connect the last node to the new node
    temp->next = newNode;
}

// Function to delete the first node containing the given value
void deleteValue(node*& head, int val) {

    // CASE 1: Check whether the list is empty
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    // CASE 2: Check whether the first node contains the value
    if (head->data == val) {

        node* temp = head;      // Save the first node's address
        head = head->next;      // Move head to the second node
        delete temp;            // Free the old first node's memory

        cout << "Node deleted successfully.\n";
        return;
    }

    // CASE 3: Search for the value in the remaining nodes
    node* temp = head;          // Start searching from the first node

    // Continue while another node exists and its value is not val
    while (temp->next != nullptr &&
           temp->next->data != val) {

        temp = temp->next;      // Move to the next node
    }

    // If there is no next node, the value was not found
    if (temp->next == nullptr) {
        cout << "Value not found.\n";
        return;
    }

    // The next node is the node we want to delete
    node* delNode = temp->next;

    // Skip the target node and connect to the following node
    temp->next = delNode->next;

    // Release the deleted node's memory
    delete delNode;

    cout << "Node deleted successfully.\n";
}

// Function to display all nodes
void display(node* head) {

    node* temp = head;          // Start at the first node

    // Print nodes until we reach nullptr
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;      // Move to the next node
    }

    cout << "NULL\n";           // Marks the end of the list
}

int main() {

    node* head = nullptr;       // Initially, the list is empty

    // Insert four values into the linked list
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);

    // Display the original list
    cout << "Original list: ";
    display(head);

    int val;                    // Variable for the value to delete

    cout << "Enter value to delete: ";
    cin >> val;                 // Read the user's input

    deleteValue(head, val);     // Search for and delete the value

    // Display the list after deletion
    cout << "Updated list: ";
    display(head);

    // Delete all remaining nodes to avoid memory leaks
    while (head != nullptr) {

        node* temp = head;      // Save the current first node
        head = head->next;      // Move head forward
        delete temp;            // Free the saved node
    }

    return 0;                   // End the program successfully
}
/*Original list: 10 -> 20 -> 30 -> 40 -> NULL
Enter value to delete: 40
Node deleted successfully.
Updated list: 10 -> 20 -> 30 -> NULL*/