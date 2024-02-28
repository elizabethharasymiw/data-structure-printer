#include <iostream>

//#include "tree.hpp"

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void printDFTPath(TreeNode* root){
	if(root == NULL) return;   // Exit recursion
	std::cout << root->val << std::endl; // Print what we are looking at
	printDFTPath(root->left);  // Try to go Left
	printDFTPath(root->right); // Try to go Right
}

void printInOrderPath(TreeNode* root){
	if(root == NULL) return;       // Exit recursion
	printInOrderPath(root->left);  // Try to go Left
	std::cout << root->val << std::endl;     // Print what we are looking at
	printInOrderPath(root->right); // Try to go Right
}

int main(int argc, char *argv[]) {

	// InOrder example of Tree in an Array
	// [3, 2, 4, 1,null,null, 5]


	// Manuel build example tree for testing
	TreeNode myTreeRoot(3);
	TreeNode myTree2(2);
	TreeNode myTree1(1);
	TreeNode myTree4(4);
	TreeNode myTree5(5);

	myTreeRoot.left = &myTree2;
	myTreeRoot.right = &myTree4;

	myTree2.left = &myTree1;
	myTree4.right = &myTree5;

	std::cout << "printing DFT of Tree Example" << std::endl;
	printDFTPath(&myTreeRoot);

	std::cout << "printing in order traversal of Tree Example" << std::endl;
	printInOrderPath(&myTreeRoot);

	return 0;
}