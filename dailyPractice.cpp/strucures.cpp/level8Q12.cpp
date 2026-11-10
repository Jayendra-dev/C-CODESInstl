//12.  Implement Queue Using a Linked List in C++

#include <iostream>
using namespace std;

// Structure of a node
struct Node {
    int data;
    Node* next;
};

// Initialize front and rear
Node* front = NULL;
Node* rear = NULL;

// Insert element into queue
void enqueue(int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    // If queue is empty
    if (front == NULL) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }

    cout << value << " inserted into queue.\n";
}

// Delete element from queue
void dequeue() {
    if (front == NULL) {
        cout << "Queue is Empty!\n";
        return;
    }

    Node* temp = front;

    cout << "Deleted element: " << front->data << endl;

    front = front->next;

    // If queue becomes empty
    if (front == NULL) {
        rear = NULL;
    }

    delete temp;
}

// Display front element
void peek() {
    if (front == NULL) {
        cout << "Queue is Empty!\n";
    }
    else {
        cout << "Front element: " << front->data << endl;
    }
}

// Display all elements
void display() {
    if (front == NULL) {
        cout << "Queue is Empty!\n";
        return;
    }

    Node* temp = front;

    cout << "Queue elements: ";

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Main function
int main() {
    int choice, value;

    do {
        cout << "\n--- QUEUE USING LINKED LIST ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    // Free remaining nodes
    while (front != NULL) {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
    rear = NULL;

    return 0;
}
/*--- QUEUE USING LINKED LIST ---
1. Enqueue
2. Dequeue
3. Peek
4. Display
5. Exit
Enter your choice: 
*/