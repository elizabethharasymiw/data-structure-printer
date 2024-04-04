#ifndef TREE_HEADER_FILE_HPP
#define TREE_HEADER_FILE_HPP

#include <iostream>

// LeetCode Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

// Print out the values of the given tree following a Depth-First Traversal
void printDFTPath(TreeNode *root);

// Print out the values of the given tree following a Breath-First Traversal
void printInOrderPath(TreeNode *root);

#endif // TREE_HEADER_FILE_HPP
