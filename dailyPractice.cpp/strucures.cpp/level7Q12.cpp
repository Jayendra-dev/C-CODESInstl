//12. Find maximum value in a binary tree.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to find maximum value
int findMax(Node* root) {
    // If tree is empty
    if (root == NULL) {
        return -1;
    }

    // Find maximum in left subtree
    int leftMax = findMax(root->left);

    // Find maximum in right subtree
    int rightMax = findMax(root->right);

    // Compare root, left and right values
    int maximum = root->data;

    if (leftMax > maximum) {
        maximum = leftMax;
    }

    if (rightMax > maximum) {
        maximum = rightMax;
    }

    return maximum;
}

int main() {
    // Creating the binary tree
    Node* root = new Node{10, NULL, NULL};
    root->left = new Node{25, NULL, NULL};
    root->right = new Node{15, NULL, NULL};
    root->left->left = new Node{40, NULL, NULL};
    root->left->right = new Node{5, NULL, NULL};

    cout << "Maximum value: " << findMax(root);

    return 0;
}
//output:
//Maximum value: 40