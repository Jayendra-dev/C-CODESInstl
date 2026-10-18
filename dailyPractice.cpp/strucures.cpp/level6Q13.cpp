//13.  Count nodes.

#include <iostream>
using namespace std;

// Structure representing one node of the linked list
struct Node {
    int data;       // Stores the value of the node
    Node* next;     // Stores the address of the next node
};

// Head points to the first node.
// Initially, the linked list is empty.
Node* head = NULL;

// Function to insert a node at the end
void insertEnd() {
    int val;

    cout << "Enter value: ";
    cin >> val;

    // Create a new node dynamically
    Node* newNode = new Node();

    newNode->data = val;       // Store the given value
    newNode->next = NULL;      // New node will be the last node

    // If the list is empty, the new node becomes the first node
    if (head == NULL) {
        head = newNode;
    }
    else {
        // Start from the first node
        Node* temp = head;

        // Move until the last node is reached
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Connect the last node to the new node
        temp->next = newNode;
    }

    cout << "Node inserted successfully.\n";
}

// Function to count the total number of nodes
void countNodes() {

    // Initially, no nodes have been counted
    int count = 0;

    // Start traversal from the first node
    Node* temp = head;

    // Visit every node until temp becomes NULL
    while (temp != NULL) {

        count++;                // Count the current node

        temp = temp->next;      // Move to the next node
    }

    // Display the total number of nodes
    cout << "Total number of nodes: " << count << '\n';
}

// Function to display the linked list
void display() {
    Node* temp = head;

    // An empty list contains no nodes
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    cout << "Linked List: ";

    // Print each node's data
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main() {
    int choice;

    // Display the menu repeatedly until the user exits
    do {
        cout << "\n1. Insert at End\n";
        cout << "2. Display List\n";
        cout << "3. Count Nodes\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insertEnd();
                break;

            case 2:
                display();
                break;

            case 3:
                countNodes();
                break;

            case 4:
                cout << "Program terminated.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
/*1. Insert at End
2. Display List
3. Count Nodes
4. Exit
Enter choice: 1
Enter value: 12
Node inserted successfully.

1. Insert at End
2. Display List
3. Count Nodes
4. Exit
Enter choice: 1
Enter value: 12
Node inserted successfully.

1. Insert at End
2. Display List
3. Count Nodes
4. Exit
Enter choice: 1
Enter value: 3
Node inserted successfully.

1. Insert at End
2. Display List
3. Count Nodes
4. Exit
Enter choice: 1
Enter value: 3
Node inserted successfully.

1. Insert at End
2. Display List
3. Count Nodes
4. Exit
Enter choice: 2
Linked List: 12 -> 12 -> 3 -> 3 -> NULL

1. Insert at End
2. Display List
3. Count Nodes
4. Exit
Enter choice: 3
Total number of nodes: 4

1. Insert at End
2. Display List
3. Count Nodes
4. Exit
Enter choice: 4
Program terminated.*/
