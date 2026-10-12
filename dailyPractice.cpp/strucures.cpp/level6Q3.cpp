//3. Display two connected nodes.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Create two nodes dynamically
    Node* first = new Node();
    Node* second = new Node();

    // Store data
    first->data = 10;
    second->data = 20;

    // Connect the nodes
    first->next = second;
    second->next = nullptr;

    // Display the connected nodes
    Node* temp = first;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    // Free allocated memory
    delete second;
    delete first;

    return 0;
}
//PS D:\cpp\CPP\StructuresInCPP\output> & .\'level6Q3.exe'
//10 -> 20 -> NULL
