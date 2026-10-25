//7. Perform preorder traversal.
#include <iostream>
using namespace std;

// Structure representing a binary tree node
struct Node
{
    char data;
    Node* left;
    Node* right;

    // Constructor initializes a new node
    Node(char value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Function to perform preorder traversal
void preorder(Node* root)
{
    // Base case: if the node does not exist
    if (root == NULL)
    {
        return;
    }

    // Step 1: Visit the root node
    cout << root->data << " ";

    // Step 2: Traverse the left subtree
    preorder(root->left);

    // Step 3: Traverse the right subtree
    preorder(root->right);
}

int main()
{
    // Create the binary tree manually
    Node* root = new Node('A');

    root->left = new Node('B');
    root->right = new Node('C');

    root->left->left = new Node('D');
    root->left->right = new Node('E');

    // Perform preorder traversal
    cout << "Preorder Traversal: ";
    preorder(root);

    return 0;
}
//output:
//Preorder Traversal: A B D E C 