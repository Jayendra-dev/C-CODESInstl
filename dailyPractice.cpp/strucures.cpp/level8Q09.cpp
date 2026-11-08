
// 9. Implement a priority queue using structures.


#include <iostream>
using namespace std;

// Structure to store data and priority
struct PriorityQueue {
    int data;
    int priority;
};

PriorityQueue pq[100];
int count = 0;

// Function to insert an element
void insertElement() {

    if (count == 100) {
        cout << "Priority Queue is Full!\n";
        return;
    }

    int value, p;

    cout << "Enter element: ";
    cin >> value;

    cout << "Enter priority (smaller number = higher priority): ";
    cin >> p;

    pq[count].data = value;
    pq[count].priority = p;

    count++;

    cout << "Element inserted successfully!\n";
}

// Function to delete highest priority element
void deleteElement() {

    if (count == 0) {
        cout << "Priority Queue is Empty!\n";
        return;
    }

    int highest = 0;

    // Find the element with highest priority
    for (int i = 1; i < count; i++) {

        if (pq[i].priority < pq[highest].priority) {
            highest = i;
        }
    }

    cout << "Deleted element: " << pq[highest].data << endl;

    // Shift elements to the left
    for (int i = highest; i < count - 1; i++) {
        pq[i] = pq[i + 1];
    }

    count--;

    cout << "Element deleted successfully!\n";
}

// Function to display priority queue
void display() {

    if (count == 0) {
        cout << "Priority Queue is Empty!\n";
        return;
    }

    cout << "\nElement\tPriority\n";

    for (int i = 0; i < count; i++) {
        cout << pq[i].data << "\t"
             << pq[i].priority << endl;
    }
}

// Main function
int main() {

    int choice;

    do {

        cout << "\n===== PRIORITY QUEUE =====\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Element\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                insertElement();
                break;

            case 2:
                deleteElement();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Program Terminated.\n";
                break;

            default:
                cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}


/*outPut===== PRIORITY QUEUE =====
1. Insert Element
2. Delete Element
3. Display Queue
4. Exit
Enter your choice: 1
Enter element: 12
Enter priority (smaller number = higher priority): 1
Element inserted successfully!

===== PRIORITY QUEUE =====
1. Insert Element
2. Delete Element
3. Display Queue
4. Exit
Enter your choice: 1
Enter element: 11
Enter priority (smaller number = higher priority): 2
Element inserted successfully!

===== PRIORITY QUEUE =====
1. Insert Element
2. Delete Element
3. Display Queue
4. Exit
Enter your choice: 1 
Enter element: 13
Enter priority (smaller number = higher priority): 3
Element inserted successfully!

===== PRIORITY QUEUE =====
1. Insert Element
2. Delete Element
3. Display Queue
4. Exit
Enter your choice: 3

Element Priority
12      1
11      2
13      3

===== PRIORITY QUEUE =====
1. Insert Element
2. Delete Element
3. Display Queue
4. Exit
Enter your choice: 2
Deleted element: 12
Element deleted successfully!

===== PRIORITY QUEUE =====
1. Insert Element
2. Delete Element
3. Display Queue
4. Exit
Enter your choice: 4
Program Terminated.*/