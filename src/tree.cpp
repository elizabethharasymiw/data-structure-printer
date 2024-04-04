#include "tree.hpp"

#include <iostream>

void printDFTPath(TreeNode *root) {
    if (root == NULL)
        return;                          // Exit recursion
    std::cout << root->val << std::endl; // Print what we are looking at
    printDFTPath(root->left);            // Try to go Left
    printDFTPath(root->right);           // Try to go Right
}

void printInOrderPath(TreeNode *root) {
    if (root == NULL)
        return;                          // Exit recursion
    printInOrderPath(root->left);        // Try to go Left
    std::cout << root->val << std::endl; // Print what we are looking at
    printInOrderPath(root->right);       // Try to go Right
}