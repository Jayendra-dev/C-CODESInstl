//5. Create a structure for a binary-tree node.

#include <iostream>
using namespace std;

// Structure representing one binary-tree node
struct Node
{
    int data;        // Stores the value of the node
    Node* left;      // Points to the left child
    Node* right;     // Points to the right child
};

int main()
{
    // Create a node dynamically
    Node* root = new Node;

    // Assign data to the root node
    root->data = 10;

    // Initially, the root has no children
    root->left = nullptr;
    root->right = nullptr;

    // Display the node information
    cout << "Root data: " << root->data << endl;

    if (root->left == nullptr)
        cout << "Left child: NULL" << endl;

    if (root->right == nullptr)
        cout << "Right child: NULL" << endl;

    // Release the dynamically allocated memory
    delete root;
    root = nullptr;

    return 0;
}
/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'level7Q5.exe'
Root data: 10
Left child: NULL
Right child: NULL*/