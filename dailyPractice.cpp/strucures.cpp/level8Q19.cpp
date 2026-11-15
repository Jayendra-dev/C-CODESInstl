// DSA: Find the Kth Node from the End of a Linked List (C++ Using Structures)

#include <iostream>
using namespace std;

// Structure of a node
struct Node
{
    int data;
    Node* next;
};

// Function to find kth node from the end
Node* findKthFromEnd(Node* head, int k)
{
    Node* slow = head;
    Node* fast = head;

    // Invalid k
    if (k <= 0)
    {
        return NULL;
    }

    // Move fast pointer k steps ahead
    for (int i = 0; i < k; i++)
    {
        if (fast == NULL)
        {
            return NULL;  // k is greater than list length
        }

        fast = fast->next;
    }

    // Move both pointers together
    while (fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // Slow points to kth node from end
    return slow;
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

    int k = 2;

    // Finding kth node
    Node* result = findKthFromEnd(first, k);

    if (result != NULL)
    {
        cout << k << "th node from end is: "
             << result->data;
    }
    else
    {
        cout << "Invalid k!";
    }

    return 0;
}
//output:
/*2th node from end is: 40*/