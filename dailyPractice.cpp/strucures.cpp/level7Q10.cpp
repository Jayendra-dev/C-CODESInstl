//10.Count nodes in a binary tree.


#include <iostream>
using namespace std;

// Structure representing a binary tree node
struct Node
{
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Function to count all nodes
int countNodes(Node* root)
{
    // Base case: empty tree
    if (root == NULL)
    {
        return 0;
    }

    // Count current node + left subtree + right subtree
    return 1 + countNodes(root->left)
             + countNodes(root->right);
}

int main()
{
    // Create a binary tree manually
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    // Count and display nodes
    cout << "Total nodes in binary tree: "
         << countNodes(root) << endl;

    return 0;
}
//output:
//Total nodes in binary tree: 5