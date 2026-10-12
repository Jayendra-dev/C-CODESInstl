//5.  Traverse nodes using a pointer.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Create five nodes
    Node* first  = new Node();
    Node* second = new Node();
    Node* third  = new Node();
    Node* fourth = new Node();
    Node* fifth  = new Node();

    // Assign data
    first->data  = 10;
    second->data = 20;
    third->data  = 30;
    fourth->data = 40;
    fifth->data  = 50;

    // Connect nodes
    first->next  = second;
    second->next = third;
    third->next  = fourth;
    fourth->next = fifth;
    fifth->next  = nullptr;

    // Traverse using a pointer
    Node* temp = first;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Free allocated memory
    delete first;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'level6Q5.exe'
10 20 30 40 50 */
