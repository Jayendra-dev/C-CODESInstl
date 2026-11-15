// Remove Nth Node from the End of a Linked List .

#include <iostream>
using namespace std;

// Structure of a node
struct Node
{
    int data;
    Node* next;
};

// Function to remove nth node from end
Node* removeNthFromEnd(Node* head, int n)
{
    // Invalid input
    if (n <= 0)
    {
        return head;
    }

    // Creating dummy node
    Node* dummy = new Node{0, head};

    // Initialize two pointers
    Node* slow = dummy;
    Node* fast = dummy;

    // Move fast n+1 steps ahead
    for (int i = 0; i <= n; i++)
    {
        if (fast == NULL)
        {
            delete dummy;
            return head;  // Invalid n
        }

        fast = fast->next;
    }

    // Move both pointers together
    while (fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // Delete target node
    Node* temp = slow->next;

    slow->next = temp->next;

    delete temp;

    // Store updated head
    Node* newHead = dummy->next;

    delete dummy;

    return newHead;
}

// Function to display linked list
void display(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    // Creating nodes
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};
    head->next->next->next = new Node{40, NULL};
    head->next->next->next->next = new Node{50, NULL};

    cout << "Original Linked List: ";
    display(head);

    int n = 2;

    // Remove nth node from end
    head = removeNthFromEnd(head, n);

    cout << "After Deletion: ";
    display(head);

    // Free remaining nodes
    while (head != NULL)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
/*Original Linked List: 10 -> 20 -> 30 -> 40 -> 50 -> NULL
After Deletion: 10 -> 20 -> 30 -> 50 -> NULL*/