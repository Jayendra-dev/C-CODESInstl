//15. Find minimum node value.
// 15. Find minimum node value

#include <iostream>
using namespace std;

// Structure representing a linked-list node
struct Node {
    int data;       // Stores the value of the node
    Node* next;     // Stores the address of the next node
};

// Function to find the minimum node value
void findMinimum(Node* head) {

    // Check whether the linked list is empty
    if (head == nullptr) {
        cout << "Linked list is empty.";
        return;
    }

    // Assume the first node contains the minimum value
    int minimum = head->data;

    // Pointer to traverse the linked list
    Node* temp = head;

    while (temp != nullptr) {

        // Compare current node value with minimum
        if (temp->data < minimum) {
            minimum = temp->data;
        }

        // Move to the next node
        temp = temp->next;
    }

    // Display the minimum value
    cout << "Minimum value = " << minimum << endl;
}

int main() {

    // Create three nodes dynamically
    Node* first = new Node{10, nullptr};
    Node* second = new Node{50, nullptr};
    Node* third = new Node{5, nullptr};

    // Connect the nodes
    first->next = second;
    second->next = third;

    // Find and display the minimum value
    findMinimum(first);

    // Free dynamically allocated memory
    delete third;
    delete second;
    delete first;

    return 0;
}
//Minimum value = 5