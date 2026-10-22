//19. Count occurrences of a particular value.

#include <iostream>
using namespace std;

// Structure representing one node
struct Node {
    int data;
    Node* next;
};

// Initially, the linked list is empty
Node* head = NULL;

// Function to insert a node at the end
void insertEnd() {
    int val;

    cout << "Enter value: ";
    cin >> val;

    Node* newNode = new Node();

    newNode->data = val;
    newNode->next = NULL;

    // If the list is empty, newNode becomes the first node
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;

        // Move to the last node
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Link the last node to the new node
        temp->next = newNode;
    }

    cout << "Inserted successfully.\n";
}

// Function to display the linked list
void Display() {
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

// Function to count occurrences of a particular value
void countOccurrences() {
    if (head == NULL) {
        cout << "Empty list.\n";
        return;
    }

    int key;
    int count = 0;

    cout << "Enter value to search: ";
    cin >> key;

    Node* temp = head;

    // Traverse every node and compare its data with key
    while (temp != NULL) {
        if (temp->data == key) {
            count++;
        }

        temp = temp->next;
    }

    cout << "Value " << key << " occurs "
         << count << " time(s).\n";
}

int main() {
    int ch;

    do {
        cout << "\n1. Insert at end";
        cout << "\n2. Display";
        cout << "\n3. Count occurrences";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";

        cin >> ch;

        switch (ch) {
            case 1:
                insertEnd();
                break;

            case 2:
                Display();
                break;

            case 3:
                countOccurrences();
                break;

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (ch != 4);

    return 0;
}
/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'level6Q19.exe'

1. Insert at end
2. Display
3. Count occurrences
4. Exit
Enter choice: 1
Enter value: 11
Inserted successfully.

1. Insert at end
2. Display
3. Count occurrences
4. Exit
Enter choice: 1
Enter value: 12
Inserted successfully.

1. Insert at end
2. Display
3. Count occurrences
4. Exit
Enter choice: 1
Enter value: 13
Inserted successfully.

1. Insert at end
2. Display
3. Count occurrences
4. Exit
Enter choice: 1
Enter value: 14
Inserted successfully.

1. Insert at end
2. Display
3. Count occurrences
4. Exit
Enter choice: 1
Enter value: 15
Inserted successfully.

1. Insert at end
2. Display
3. Count occurrences
4. Exit
Enter choice: 2
11 -> 12 -> 13 -> 14 -> 15 -> NULL

1. Insert at end
2. Display
3. Count occurrences
4. Exit
Enter choice: 3
Enter value to search: 13
Value 13 occurs 1 time(s).

1. Insert at end
2. Display
3. Count occurrences
4. Exit
Enter choice: 4
Exiting program.*/
