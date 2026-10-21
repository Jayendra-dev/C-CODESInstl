//18. Detect whether a cycle exists.
/*We will use Floyd’s Cycle Detection Algorithm, also called the Slow and Fast Pointer Technique.

A cycle exists when a node points back to a previously visited node instead of pointing to NULL.
Example 1: No cycle
10

20

30

40

NULL

Output: No cycle exists.

Example 2: Cycle exists

10 → 20 → 30 → 40

↑                     ↓

└──────── 20 ←────────┘

Output: Cycle exists.*/


#include <iostream>
using namespace std;

// Structure of a linked-list node
struct node {
    int data;       // Stores the value of the node
    node* next;     // Stores the address of the next node
};

// Function to detect a cycle using Floyd's algorithm
bool detectCycle(node* head) {
    node* slow = head;  // Moves one step at a time
    node* fast = head;  // Moves two steps at a time

    // Continue while fast can safely move forward
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        // If both pointers meet, a cycle exists
        if (slow == fast) {
            return true;
        }
    }

    // Fast reached the end, so no cycle exists
    return false;
}

int main() {
    node* head = NULL;
    node* tail = NULL;

    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    // Create the linked list using user input
    for (int i = 1; i <= n; i++) {
        cout << "Enter value for node " << i << ": ";
        cin >> value;

        // Create a new node
        node* newNode = new node{value, NULL};

        // If this is the first node, set head
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            // Attach the new node at the end
            tail->next = newNode;
            tail = newNode;
        }
    }

    int choice;
    cout << "\nCreate a cycle?\n";
    cout << "1. Yes\n";
    cout << "2. No\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1 && head != NULL) {
        int position;

        cout << "Enter position to connect the last node to"
             << " (1 to " << n << "): ";
        cin >> position;

        // Validate the position
        if (position < 1 || position > n) {
            cout << "Invalid position. No cycle created.\n";
        } else {
            // Find the node at the specified position
            node* temp = head;

            for (int i = 1; i < position; i++) {
                temp = temp->next;
            }

            // Connect the last node to this node
            tail->next = temp;
        }
    }

    // Detect whether a cycle exists
    if (detectCycle(head)) {
        cout << "\nCycle exists in the linked list.\n";
    } else {
        cout << "\nNo cycle exists in the linked list.\n";
    }

    // Break any cycle before deleting nodes
    if (tail != NULL) {
        tail->next = NULL;
    }

    // Free all allocated nodes
    node* current = head;

    while (current != NULL) {
        node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'level6Q18.exe'
Enter number of nodes: 5
Enter value for node 1: 11
Enter value for node 2: 12
Enter value for node 3: 13
Enter value for node 4: 14
Enter value for node 5: 15

Create a cycle?
1. Yes
2. No
Enter choice: 1
Enter position to connect the last node to (1 to 5): 2

Cycle exists in the linked list.*/