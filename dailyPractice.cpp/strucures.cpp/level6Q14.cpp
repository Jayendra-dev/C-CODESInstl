// 14. Find maximum node value using Structure

#include <iostream>
using namespace std;

// Structure representing a linked-list node
struct Node {
    int data;       // Stores the value of the node
    Node* next;     // Stores the address of the next node
};

// Function to find the maximum value
void findMaximum(Node* head) {

    // Check whether the linked list is empty
    if (head == nullptr) {
        cout << "Linked list is empty.";
        return;
    }

    // Assume the first node contains the maximum value
    int maximum = head->data;

    // Start traversing from the first node
    Node* temp = head;

    while (temp != nullptr) {

        // Compare current node's value with maximum
        if (temp->data > maximum) {
            maximum = temp->data;
        }

        // Move to the next node
        temp = temp->next;
    }

    // Display the maximum value
    cout << "Maximum value = " << maximum << endl;
}

int main() {

    // Create three nodes
    Node* first = new Node{10, nullptr};
    Node* second = new Node{50, nullptr};
    Node* third = new Node{30, nullptr};

    // Connect the nodes
    first->next = second;
    second->next = third;

    // Find the maximum node value
    findMaximum(first);

    // Release dynamically allocated memory
    delete third;
    delete second;
    delete first;

    return 0;
}
//output
//Maximum value = 50