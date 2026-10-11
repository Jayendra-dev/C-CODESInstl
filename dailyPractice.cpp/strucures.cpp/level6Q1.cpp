//1. Create a Node structure containing data and next.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* newNode = new Node();

    newNode->data = 10;
    newNode->next = nullptr;

    cout << "Data: " << newNode->data << endl;
    cout << "Next: " << newNode->next << endl;

    delete newNode;

    return 0;
}
/* Output:
PS D:\cpp\CPP\StructuresInCPP\output> & .\'level6Q1.exe'
Data: 10
Next: 0*/