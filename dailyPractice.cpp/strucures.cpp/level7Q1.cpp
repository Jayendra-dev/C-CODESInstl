//1. Create a structure representing a stack node.

#include <iostream>
using namespace std;

// Structure representing a stack node
struct StackNode
{
    int data;          // Stores the value of the node
    StackNode* next;   // Points to the next node

    // Constructor to initialize a node
    StackNode(int value)
    {
        data = value;
        next = nullptr;
    }
};

int main()
{
    int n, value;

    StackNode* top = nullptr;  // Initially, the stack is empty

    // Ask the user how many nodes to create
    cout << "Enter the number of nodes: ";
    cin >> n;

    // Take multiple values from the user
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter value for node " << i << ": ";
        cin >> value;

        // Create a new node
        StackNode* newNode = new StackNode(value);

        // Insert the new node at the top of the stack
        newNode->next = top;
        top = newNode;
    }

    // Display the stack from top to bottom
    cout << "\nStack elements (Top to Bottom): ";

    StackNode* temp = top;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Free memory occupied by all nodes
    while (top != nullptr)
    {
        StackNode* temp = top;
        top = top->next;
        delete temp;
    }

    return 0;
}
/*Enter the number of nodes: 5
Enter value for node 1: 12
Enter value for node 2: 13
Enter value for node 3: 14
Enter value for node 4: 15
Enter value for node 5: 16

Stack elements (Top to Bottom): 16 15 14 13 12 */