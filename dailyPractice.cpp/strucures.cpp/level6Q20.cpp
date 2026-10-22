//20. Remove duplicate values.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert a node at the end of the linked list
void insertEnd() {
    int val;

    cout << "Enter value: ";
    cin >> val;

    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;

        // Reach the last node
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "Node inserted successfully.\n";
}

// Display the linked list
void display() {
    if (head == NULL) {
        cout << "Empty list.\n";
        return;
    }

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

// Remove duplicate values from the linked list
void removeDuplicates() {
    if (head == NULL) {
        cout << "Empty list.\n";
        return;
    }

    Node* current = head;

    // Check each node against all following nodes
    while (current != NULL) {
        Node* prev = current;
        Node* temp = current->next;

        while (temp != NULL) {
            if (temp->data == current->data) {
                // Duplicate found: unlink the duplicate node
                prev->next = temp->next;

                // Free the memory of the duplicate node
                delete temp;

                // Continue from the next node
                temp = prev->next;
            } else {
                // Move both pointers forward
                prev = temp;
                temp = temp->next;
            }
        }

        current = current->next;
    }

    cout << "Duplicate values removed successfully.\n";
}

int main() {
    int choice;

    do {
        cout << "\n--- Linked List Menu ---\n";
        cout << "1. Insert at end\n";
        cout << "2. Display list\n";
        cout << "3. Remove duplicate values\n";
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
                removeDuplicates();
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
/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'level6Q20.exe'



--- Linked List Menu ---
1. Insert at end
2. Display list
3. Remove duplicate values
4. Exit
Enter choice: 1
Enter value: 11
Node inserted successfully.

--- Linked List Menu ---
1. Insert at end
2. Display list
3. Remove duplicate values
4. Exit
Enter choice: 1
Enter value: 11
Node inserted successfully.

--- Linked List Menu ---
1. Insert at end
2. Display list
3. Remove duplicate values
4. Exit
Enter choice: 1
Enter value: 12
Node inserted successfully.

--- Linked List Menu ---
1. Insert at end
2. Display list
3. Remove duplicate values
4. Exit
Enter choice: 13
Invalid choice.

--- Linked List Menu ---
1. Insert at end
2. Display list
3. Remove duplicate values
4. Exit
Enter choice: 2
11 -> 11 -> 12 -> NULL

--- Linked List Menu ---
1. Insert at end
2. Display list
3. Remove duplicate values
4. Exit
Enter choice: 3
Duplicate values removed successfully.

--- Linked List Menu ---
1. Insert at end
2. Display list
3. Remove duplicate values
4. Exit
Enter choice: 2
11 -> 12 -> NULL

--- Linked List Menu ---
1. Insert at end
2. Display list
3. Remove duplicate values
4. Exit
Enter choice: 4
Program terminated.*/