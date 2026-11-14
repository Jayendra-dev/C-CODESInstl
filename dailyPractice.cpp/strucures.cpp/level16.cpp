//15.  Merge Two Sorted Linked Lists

#include <iostream>
using namespace std;

// Structure for creating a node
struct Node
{
    int data;
    Node* next;
};

// Function to create a new node
Node* createNode(int value)
{
    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}

// Function to insert a node at the end
void insert(Node*& head, int value)
{
    Node* newNode = createNode(value);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
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

// Function to merge two sorted linked lists
Node* mergeLists(Node* head1, Node* head2)
{
    Node* head = NULL;
    Node* tail = NULL;

    while (head1 != NULL && head2 != NULL)
    {
        Node* selected;

        // Compare both node values
        if (head1->data <= head2->data)
        {
            selected = head1;
            head1 = head1->next;
        }
        else
        {
            selected = head2;
            head2 = head2->next;
        }

        // First node of merged list
        if (head == NULL)
        {
            head = selected;
            tail = selected;
        }
        else
        {
            tail->next = selected;
            tail = selected;
        }
    }

    // Attach remaining nodes
    if (head1 != NULL)
        tail->next = head1;

    if (head2 != NULL)
        tail->next = head2;

    return head;
}

int main()
{
    Node* head1 = NULL;
    Node* head2 = NULL;

    int n, m, value;

    // First linked list
    cout << "Enter number of nodes in first list: ";
    cin >> n;

    cout << "Enter sorted elements of first list:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        insert(head1, value);
    }

    // Second linked list
    cout << "Enter number of nodes in second list: ";
    cin >> m;

    cout << "Enter sorted elements of second list:\n";

    for (int i = 0; i < m; i++)
    {
        cin >> value;
        insert(head2, value);
    }

    cout << "\nFirst Linked List: ";
    display(head1);

    cout << "Second Linked List: ";
    display(head2);

    // Merge both lists
    Node* mergedHead = mergeLists(head1, head2);

    cout << "\nMerged Sorted Linked List: ";
    display(mergedHead);

    return 0;
}


/*
oUTPUT:


PS D:\cpp\CPP\StructuresInCPP\output> & .\'level16.exe'
Enter number of nodes in first list: 3
Enter sorted elements of first list:
10
30
50
Enter number of nodes in second list: 3
Enter sorted elements of second list:
20
40
60

First Linked List: 10 -> 30 -> 50 -> NULL
Second Linked List: 20 -> 40 -> 60 -> NULL

Merged Sorted Linked List: 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> NULL*/