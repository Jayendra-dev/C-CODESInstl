//7.  Insert a node at the end.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtEnd(Node*& head, int value) {
    // Step 1: Create a new node
    Node* newNode = new Node();

    // Step 2: Store data and mark it as the last node
    newNode->data = value;
    newNode->next = nullptr;

    // Step 3: If the list is empty
    if (head == nullptr) {
        head = newNode;
        return;
    }

    // Step 4: Traverse to the last node
    Node* temp = head;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Step 5: Connect the last node to the new node
    temp->next = newNode;
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

    // Insert initial nodes
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Original list: ";
    display(head);

    // Insert at the end
    insertAtEnd(head, 40);

    cout << "After insertion: ";
    display(head);

    // Free allocated memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'level6Q7.exe'
Original list: 10 -> 20 -> 30 -> NULL
After insertion: 10 -> 20 -> 30 -> 40 -> NULL*/
