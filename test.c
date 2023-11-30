#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};


void printTree(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printf("%d\n", root->data);
    printTree(root->left);
    printTree(root->right);
}

int main() {
    // Creating nodes
    struct TreeNode* root = malloc(sizeof(struct TreeNode));
    struct TreeNode* leftChild = malloc(sizeof(struct TreeNode));
    struct TreeNode* rightChild = malloc(sizeof(struct TreeNode));

    // Assigning data
    root->data = 1;
    leftChild->data = 2;
    rightChild->data = 3;

    // Connecting nodes
    root->left = leftChild;
    root->right = rightChild;
    leftChild->left = NULL;
    leftChild->right = NULL;
    rightChild->left = NULL;
    rightChild->right = NULL;


    printTree(root);
    
    // Your binary tree is ready!
    return 0;
}
