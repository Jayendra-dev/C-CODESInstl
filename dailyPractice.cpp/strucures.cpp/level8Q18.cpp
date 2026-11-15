//Detect Cycle in a Linked List (C++ Using Structures)

#include <iostream>
using namespace std;

// Structure of a node
struct Node
{
    int data;
    Node* next;
};

// Function to detect cycle
bool detectCycle(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    // Move until fast reaches NULL
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;          // Move 1 step
        fast = fast->next->next;    // Move 2 steps

        // If both pointers meet, cycle exists
        if (slow == fast)
        {
            return true;
        }
    }

    // Fast reached NULL, so no cycle
    return false;
}

int main()
{
    // Creating nodes
    Node* first = new Node{10, NULL};
    Node* second = new Node{20, NULL};
    Node* third = new Node{30, NULL};
    Node* fourth = new Node{40, NULL};
    Node* fifth = new Node{50, NULL};

    // Connecting nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Creating cycle:
    // Last node points back to third node
    fifth->next = third;

    // Detecting cycle
    if (detectCycle(first))
    {
        cout << "Cycle detected in linked list!";
    }
    else
    {
        cout << "No cycle found!";
    }

    return 0;
}
/*output:
PS D:\cpp\CPP\StructuresInCPP\output> & .\'level8Q18.exe'
Cycle detected in linked list!*/