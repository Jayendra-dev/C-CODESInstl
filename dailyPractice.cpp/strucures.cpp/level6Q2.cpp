//2. Create two nodes manually and connect them.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Create two nodes manually
    Node* first = new Node();
    Node* second = new Node();

    // Store data in the nodes
    first->data = 10;
    second->data = 20;

    // Connect the first node to the second node
    first->next = second;

    // The second node points to nothing
    second->next = nullptr;

    // Display the linked list
    Node* temp = first;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Free dynamically allocated memory
    delete first;
    delete second;

    return 0;
}
/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'level6Q2.exe'
10 -> 20 -> NULL*/