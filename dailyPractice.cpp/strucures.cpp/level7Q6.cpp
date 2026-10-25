//6.  Create a binary tree manually.

#include <iostream>
using namespace std;

// Define the structure of a binary-tree node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

int main()
{
    // Step 1: Create five nodes manually
    Node* root = new Node;
    Node* node20 = new Node;
    Node* node30 = new Node;
    Node* node40 = new Node;
    Node* node50 = new Node;

    // Step 2: Assign data to each node
    root->data = 10;
    node20->data = 20;
    node30->data = 30;
    node40->data = 40;
    node50->data = 50;

    // Step 3: Connect the root node to its children
    root->left = node20;
    root->right = node30;

    // Step 4: Connect node 20 to its children
    node20->left = node40;
    node20->right = node50;

    // Step 5: Initialize the children of leaf nodes
    node30->left = nullptr;
    node30->right = nullptr;

    node40->left = nullptr;
    node40->right = nullptr;

    node50->left = nullptr;
    node50->right = nullptr;

    // Step 6: Display the root and its immediate children
    cout << "Root: " << root->data << endl;
    cout << "Left child of root: "
         << root->left->data << endl;
    cout << "Right child of root: "
         << root->right->data << endl;

    cout << "Left child of node 20: "
         << root->left->left->data << endl;
    cout << "Right child of node 20: "
         << root->left->right->data << endl;

    // Step 7: Free the allocated memory
    delete node40;
    delete node50;
    delete node20;
    delete node30;
    delete root;

    return 0;
}

/*output:
PS D:\cpp\CPP\StructuresInCPP\output> & .\'level7Q6.exe'
Root: 10
Left child of root: 20
Right child of root: 30
Left child of node 20: 40
Right child of node 20: 50*/