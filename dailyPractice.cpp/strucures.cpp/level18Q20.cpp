// Check Whether a Linked List Is a Palindrome (C++ Using Structures)

#include <iostream>
using namespace std;

// Structure of a node
struct Node
{
    int data;
    Node* next;
};

// Function to reverse a linked list
Node* reverse(Node* head)
{
    Node* prev = NULL;
    Node* current = head;
    Node* nextNode = NULL;

    while (current != NULL)
    {
        nextNode = current->next;

        current->next = prev;

        prev = current;
        current = nextNode;
    }

    return prev;
}

// Function to check palindrome
bool isPalindrome(Node* head)
{
    // Empty or single-node list is palindrome
    if (head == NULL || head->next == NULL)
    {
        return true;
    }

    Node* slow = head;
    Node* fast = head;
    Node* prevSlow = NULL;

    // Find middle of linked list
    while (fast != NULL && fast->next != NULL)
    {
        prevSlow = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* secondHalf;

    // Odd number of nodes
    if (fast != NULL)
    {
        secondHalf = slow->next;
    }
    else
    {
        // Even number of nodes
        secondHalf = slow;
    }

    // Reverse second half
    Node* reversed = reverse(secondHalf);

    // Compare both halves
    Node* first = head;
    Node* second = reversed;

    bool result = true;

    while (second != NULL)
    {
        if (first->data != second->data)
        {
            result = false;
            break;
        }

        first = first->next;
        second = second->next;
    }

    // Restore original linked list
    Node* restored = reverse(reversed);

    if (fast != NULL)
    {
        slow->next = restored;
    }
    else
    {
        prevSlow->next = restored;
    }

    return result;
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
    // Creating linked list
    Node* head = new Node{1, NULL};

    head->next = new Node{2, NULL};
    head->next->next = new Node{3, NULL};
    head->next->next->next = new Node{2, NULL};
    head->next->next->next->next = new Node{1, NULL};

    cout << "Original Linked List: ";
    display(head);

    // Check palindrome
    if (isPalindrome(head))
    {
        cout << "Linked List is Palindrome!";
    }
    else
    {
        cout << "Linked List is NOT Palindrome!";
    }

    cout << endl;

    cout << "Linked List after checking: ";
    display(head);

    // Free allocated memory
    while (head != NULL)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}


/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'level18Q20.exe'
Original Linked List: 1 -> 2 -> 3 -> 2 -> 1 -> NULL
Linked List is Palindrome!
Linked List after checking: 1 -> 2 -> 3 -> 2 -> 1 -> NULL*/