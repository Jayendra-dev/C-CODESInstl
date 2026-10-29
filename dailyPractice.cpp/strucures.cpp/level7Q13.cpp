    //13. Create a graph node structure.

#include <iostream>
using namespace std;

struct Node {
    int data;           // Stores vertex value
    Node* next;         // Points to the next node

    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);

    n1->next = n2;      // Connect node 10 to node 20

    cout << n1->data << endl;
    cout << n1->next->data << endl;

    return 0;
}
//output:
//10
//20