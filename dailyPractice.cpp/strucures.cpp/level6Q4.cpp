//4. Create 5 nodes manually and connect them.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Step 1: Create five nodes manually
    Node* first  = new Node();
    Node* second = new Node();
    Node* third  = new Node();
    Node* fourth = new Node();
    Node* fifth  = new Node();

    // Step 2: Store data in each node
    first->data  = 10;
    second->data = 20;
    third->data  = 30;
    fourth->data = 40;
    fifth->data  = 50;

    // Step 3: Connect the five nodes
    first->next  = second;
    second->next = third;
    third->next  = fourth;
    fourth->next = fifth;
    fifth->next  = nullptr;

    // Step 4: Display the linked list
    Node* temp = first;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Step 5: Free dynamically allocated memory
    delete first;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'level6Q4.exe'
10 -> 20 -> 30 -> 40 -> 50 -> NULL*/