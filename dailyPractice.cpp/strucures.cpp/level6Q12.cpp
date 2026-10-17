//12. Search a linked structure.

#include <iostream>
using namespace std;

// Structure of a node
struct node {
    int data;       // Stores the value
    node* next;     // Stores address of the next node
};

// Function to insert a node at the end
void insert(node*& head, int val) {
    node* newNode = new node();
    newNode->data = val;
    newNode->next = nullptr;

    // If the list is empty
    if (head == nullptr) {
        head = newNode;
        return;
    }

    // Traverse to the last node
    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to search for an element
void search(node* head, int key) {
    node* temp = head;
    int position = 1;

    // Traverse the linked list
    while (temp != nullptr) {
        if (temp->data == key) {
            cout << "Element found at position "
                 << position << endl;
            return;
        }

        temp = temp->next;
        position++;
    }

    cout << "Element not found in the linked list." << endl;
}

int main() {
    node* head = nullptr;
    int n, val, key;

    cout << "Enter number of nodes: ";
    cin >> n;

    // Create the linked list
    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> val;
        insert(head, val);
    }

    cout << "Enter element to search: ";
    cin >> key;

    // Search for the element
    search(head, key);

    return 0;
}
/*Enter number of nodes: 3
Enter value: 1
Enter value: 2
Enter value: 3
Enter element to search: 2
Element found at position 2*/