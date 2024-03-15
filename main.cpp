#include <iostream>

#include "list.hpp"
#include "tree.hpp"

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