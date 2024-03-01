#include <iostream>

#include "tree.hpp"
#include "list.hpp"

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

	// Manuel build example Linked List for testing
	ListNode myListNode1(1);
	ListNode myListNode2(2);
	ListNode myListNode3(3);
	myListNode1.next = &myListNode2;
	myListNode2.next = &myListNode3;

	// Print, Reverse List, Print again
	std::cout << "printing Linked List Example" << std::endl;
	printLinkedList(&myListNode1);
	ListNode* revList = reverseList(&myListNode1);
	std::cout << "printing Reversed Linked List Example" << std::endl;
	printLinkedList(revList);

	return 0;
}