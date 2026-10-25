//8.  Perform inorder traversal.
#include <iostream>
using namespace std;

// Structure representing a binary tree node
struct Node
{
    char data;
    Node* left;
    Node* right;

    // Constructor initializes the node
    Node(char value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Function to perform inorder traversal
void inorder(Node* root)
{
    // Base case: no node exists
    if (root == NULL)
    {
        return;
    }

    // Step 1: Traverse the left subtree
    inorder(root->left);

    // Step 2: Visit the root node
    cout << root->data << " ";

    // Step 3: Traverse the right subtree
    inorder(root->right);
}

int main()
{
    // Create the binary tree manually
    Node* root = new Node('A');

    root->left = new Node('B');
    root->right = new Node('C');

    root->left->left = new Node('D');
    root->left->right = new Node('E');

    // Perform inorder traversal
    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}
//output:
//Inorder Traversal: D B E A C 