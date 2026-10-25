//9. Perform postorder traversal.
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

// Function to perform postorder traversal
void postorder(Node* root)
{
    // Base case: if the node does not exist
    if (root == NULL)
    {
        return;
    }

    // Step 1: Traverse the left subtree
    postorder(root->left);

    // Step 2: Traverse the right subtree
    postorder(root->right);

    // Step 3: Visit the root node last
    cout << root->data << " ";
}

int main()
{
    // Create the binary tree manually
    Node* root = new Node('A');

    root->left = new Node('B');
    root->right = new Node('C');

    root->left->left = new Node('D');
    root->left->right = new Node('E');

    // Perform postorder traversal
    cout << "Postorder Traversal: ";
    postorder(root);

    return 0;
}

//output:
//Postorder Traversal: D E B C A 