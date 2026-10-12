//6.  Insert a node at the beginning.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtBeginning(Node*& head, int value) {
    // Step 1: Create a new node
    Node* newNode = new Node();

    // Step 2: Store the value
    newNode->data = value;

    // Step 3: Connect new node to the old first node
    newNode->next = head;

    // Step 4: Update head to the new node
    head = newNode;
}

void display(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    // Create the initial list: 10 -> 20 -> 30
    insertAtBeginning(head, 30);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 10);

    cout << "Original linked list: ";
    display(head);

    // Insert 5 at the beginning
    insertAtBeginning(head, 5);

    cout << "After insertion: ";
    display(head);

    // Free memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'level6Q6.exe'
Original linked list: 10 -> 20 -> 30 -> NULL
After insertion: 5 -> 10 -> 20 -> 30 -> NULL*/

