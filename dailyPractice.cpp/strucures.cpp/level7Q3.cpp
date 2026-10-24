//3.  Implement queue using linked nodes.

#include <iostream>
using namespace std;

// Structure representing one node of the queue
struct Node
{
    int data;       // Stores the value
    Node* next;     // Stores address of the next node
};

// Queue class containing front and rear pointers
class Queue
{
private:
    Node* front;
    Node* rear;

public:
    // Constructor: initially the queue is empty
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // Insert an element at the rear of the queue
    void enqueue(int value)
    {
        // Create a new node dynamically
        Node* newNode = new Node;

        newNode->data = value;
        newNode->next = NULL;

        // If queue is empty, new node becomes both front and rear
        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            // Link the current rear to the new node
            rear->next = newNode;

            // Update rear to point to the new last node
            rear = newNode;
        }

        cout << value << " inserted into queue.\n";
    }

    // Remove an element from the front of the queue
    void dequeue()
    {
        // An empty queue cannot remove an element
        if (front == NULL)
        {
            cout << "Queue Underflow! Queue is empty.\n";
            return;
        }

        // Temporarily store the first node
        Node* temp = front;

        cout << "Deleted element: " << front->data << endl;

        // Move front to the next node
        front = front->next;

        // If the queue becomes empty, rear must also be NULL
        if (front == NULL)
        {
            rear = NULL;
        }

        // Release memory occupied by the deleted node
        delete temp;
    }

    // Display all elements from front to rear
    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is empty.\n";
            return;
        }

        Node* temp = front;

        cout << "Front -> ";

        // Visit each node until NULL is reached
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }

    // Release all remaining nodes when the queue is destroyed
    ~Queue()
    {
        while (front != NULL)
        {
            Node* temp = front;
            front = front->next;
            delete temp;
        }

        rear = NULL;
    }
};

int main()
{
    Queue q;
    int choice, value;

    do
    {
        cout << "\n--- QUEUE MENU ---\n";
        cout << "1. Enqueue (Insert)\n";
        cout << "2. Dequeue (Delete)\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                cout << "Program terminated.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}

/*--- QUEUE MENU ---
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 11
11 inserted into queue.

--- QUEUE MENU ---
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 12
12 inserted into queue.

--- QUEUE MENU ---
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 13
13 inserted into queue.

--- QUEUE MENU ---
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 3
Front -> 11 -> 12 -> 13 -> NULL

--- QUEUE MENU ---
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 2
Deleted element: 11

--- QUEUE MENU ---
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 4
Program terminated.*/