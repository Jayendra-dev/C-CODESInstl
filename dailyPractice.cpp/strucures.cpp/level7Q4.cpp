//4. Implement priority queue using structures.

#include <iostream>
using namespace std;

// Structure representing one element
struct Element
{
    int data;
    int priority;
};

// Structure representing the priority queue
struct PriorityQueue
{
    Element items[100];
    int size;
};

// Initialize the queue
void initialize(PriorityQueue &pq)
{
    pq.size = 0;
}

// Insert a new element into the queue
void insert(PriorityQueue &pq, int value, int priority)
{
    // Check whether the queue is full
    if (pq.size == 100)
    {
        cout << "Priority Queue Overflow!\n";
        return;
    }

    // Store data and priority at the next free index
    pq.items[pq.size].data = value;
    pq.items[pq.size].priority = priority;

    pq.size++;

    cout << "Element inserted successfully.\n";
}

// Delete the element with the highest priority
void deleteHighestPriority(PriorityQueue &pq)
{
    // Check whether the queue is empty
    if (pq.size == 0)
    {
        cout << "Priority Queue Underflow!\n";
        return;
    }

    // Assume the first element has the highest priority
    int highest = 0;

    // Find the smallest priority number
    for (int i = 1; i < pq.size; i++)
    {
        if (pq.items[i].priority <
            pq.items[highest].priority)
        {
            highest = i;
        }
    }

    // Display the deleted element
    cout << "Deleted element: "
         << pq.items[highest].data << endl;

    // Shift subsequent elements one position left
    for (int i = highest; i < pq.size - 1; i++)
    {
        pq.items[i] = pq.items[i + 1];
    }

    // Decrease the number of stored elements
    pq.size--;
}

// Display all elements
void display(const PriorityQueue &pq)
{
    if (pq.size == 0)
    {
        cout << "Priority Queue is empty.\n";
        return;
    }

    cout << "\nData\tPriority\n";

    for (int i = 0; i < pq.size; i++)
    {
        cout << pq.items[i].data << "\t"
             << pq.items[i].priority << endl;
    }
}

int main()
{
    PriorityQueue pq;
    initialize(pq);

    int choice, value, priority;

    do
    {
        cout << "\n--- PRIORITY QUEUE MENU ---\n";
        cout << "1. Insert\n";
        cout << "2. Delete highest-priority element\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter data: ";
                cin >> value;

                cout << "Enter priority (1 = highest): ";
                cin >> priority;

                if (priority <= 0)
                {
                    cout << "Priority must be positive.\n";
                }
                else
                {
                    insert(pq, value, priority);
                }
                break;

            case 2:
                deleteHighestPriority(pq);
                break;

            case 3:
                display(pq);
                break;

            case 4:
                cout << "Program terminated.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}


/*--- PRIORITY QUEUE MENU ---
1. Insert
2. Delete highest-priority element
3. Display
4. Exit
Enter your choice: 1
Enter data: 11
Enter priority (1 = highest): 1
Element inserted successfully.

--- PRIORITY QUEUE MENU ---
1. Insert
2. Delete highest-priority element
3. Display
4. Exit
Enter your choice: 1
Enter data: 12
Enter priority (1 = highest): 1
Element inserted successfully.

--- PRIORITY QUEUE MENU ---
1. Insert
2. Delete highest-priority element
3. Display
4. Exit
Enter your choice: 1
Enter data: 12
Enter priority (1 = highest): 2
Element inserted successfully.

--- PRIORITY QUEUE MENU ---
1. Insert
2. Delete highest-priority element
3. Display
4. Exit
Enter your choice: 1
Enter data: 13
Enter priority (1 = highest): 3
Element inserted successfully.

--- PRIORITY QUEUE MENU ---
1. Insert
2. Delete highest-priority element
3. Display
4. Exit
Enter your choice: 3

Data    Priority
11      1
12      1
12      2
13      3

--- PRIORITY QUEUE MENU ---
1. Insert
2. Delete highest-priority element
3. Display
4. Exit
Enter your choice: 2
Deleted element: 11

--- PRIORITY QUEUE MENU ---
1. Insert
2. Delete highest-priority element
3. Display
4. Exit
Enter your choice: 3

Data    Priority
12      1
12      2
13      3

--- PRIORITY QUEUE MENU ---
1. Insert
2. Delete highest-priority element
3. Display
4. Exit
Enter your choice: 4
Program terminated.*/
