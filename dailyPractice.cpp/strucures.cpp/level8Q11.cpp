// 1. Implement Stack Using a Linked List in C++32
#include <iostream>
using namespace std;

// Structure of a node
struct Node
{
    int data;
    Node* next;
};

// Top pointer initially NULL
Node* top = NULL;

// PUSH operation
void push(int value)
{
    // Create a new node
    Node* newNode = new Node;

    // Store value
    newNode->data = value;

    // Connect new node to previous top
    newNode->next = top;

    // Update top
    top = newNode;

    cout << value << " inserted into stack.\n";
}

// POP operation
void pop()
{
    // Check whether stack is empty
    if (top == NULL)
    {
        cout << "Stack Underflow! Stack is empty.\n";
        return;
    }

    // Store top node temporarily
    Node* temp = top;

    cout << "Deleted element: " << top->data << endl;

    // Move top to next node
    top = top->next;

    // Delete old top node
    delete temp;
}

// PEEK operation
void peek()
{
    if (top == NULL)
    {
        cout << "Stack is empty.\n";
    }
    else
    {
        cout << "Top element: " << top->data << endl;
    }
}

// DISPLAY operation
void display()
{
    if (top == NULL)
    {
        cout << "Stack is empty.\n";
        return;
    }

    Node* temp = top;

    cout << "Stack elements:\n";

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

// MAIN FUNCTION
int main()
{
    int choice, value;

    do
    {
        cout << "\n--- STACK USING LINKED LIST ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Program terminated.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
/*output:
--- STACK USING LINKED LIST ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 
*/