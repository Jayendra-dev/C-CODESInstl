// Find Intersection of Two Linked Lists

#include <iostream>
using namespace std;

// Structure for linked list node
struct Node
{
    int data;
    Node* next;
};

// Function to create a node
Node* createNode(int value)
{
    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}

// Insert node at the end
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

// Display linked list
void display(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

// Find last node
Node* getTail(Node* head)
{
    if (head == NULL)
        return NULL;

    while (head->next != NULL)
    {
        head = head->next;
    }

    return head;
}

// Find intersection using two pointers
Node* findIntersection(Node* head1, Node* head2)
{
    Node* p1 = head1;
    Node* p2 = head2;

    while (p1 != p2)
    {
        if (p1 == NULL)
            p1 = head2;
        else
            p1 = p1->next;

        if (p2 == NULL)
            p2 = head1;
        else
            p2 = p2->next;
    }

    return p1;
}

int main()
{
    Node* head1 = NULL;
    Node* head2 = NULL;

    // Create first linked list
    insert(head1, 10);
    insert(head1, 20);

    // Create second linked list
    insert(head2, 15);

    // Create common nodes only once
    Node* common1 = createNode(30);
    Node* common2 = createNode(40);

    common1->next = common2;
    common2->next = NULL;

    // Connect both lists to same nodes
    getTail(head1)->next = common1;
    getTail(head2)->next = common1;

    cout << "First Linked List: ";
    display(head1);

    cout << "Second Linked List: ";
    display(head2);

    // Find intersection
    Node* intersection = findIntersection(head1, head2);

    if (intersection != NULL)
    {
        cout << "\nIntersection found!";
        cout << "\nIntersection Node Data: "
             << intersection->data;

        cout << "\nIntersection Node Address: "
             << intersection;
    }
    else
    {
        cout << "\nNo intersection found.";
    }

    return 0;
}


/*PS D:\cpp\CPP\StructuresInCPP\output> cd 'd:\cpp\CPP\StructuresInCPP\output'
PS D:\cpp\CPP\StructuresInCPP\output> & .\'level17.exe'
First Linked List: 10 -> 20 -> 30 -> 40 -> NULL
Second Linked List: 15 -> 30 -> 40 -> NULL

Intersection found!
Intersection Node Data: 30
Intersection Node Address: 0x183acf72150*/