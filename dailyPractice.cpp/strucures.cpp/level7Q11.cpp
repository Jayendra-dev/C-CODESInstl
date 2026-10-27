//11.  Find tree height.

#include <iostream>
using namespace std;

// Structure representing a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node;

    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;

    return newNode;
}

// Function to find the height of the tree
int findHeight(Node* root) {

    // Base case: empty tree
    if (root == nullptr) {
        return -1;
    }

    // Find height of left subtree
    int leftHeight = findHeight(root->left);

    // Find height of right subtree
    int rightHeight = findHeight(root->right);

    // Height = 1 + maximum subtree height
    if (leftHeight > rightHeight) {
        return leftHeight + 1;
    } else {
        return rightHeight + 1;
    }
}

int main() {

    // Create a binary tree manually
    Node* root = createNode(1);

    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // Calculate and display height
    cout << "Height of the binary tree: "
         << findHeight(root) << endl;

    return 0;
}
//output:
//Height of the binary tree: 2