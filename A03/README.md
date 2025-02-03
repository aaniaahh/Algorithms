# Assignment 3 - Binary Search Tree Delete

## Overview
This document explains the different cases that need to be handled when deleting a node from a 
Binary Search Tree (BST). Deleting a node is more complex than inserting or searching because 
it requires reorganizing the tree to maintain its structure and properties.

## Deletion Cases
When deleting a node in a BST, there are three main cases to consider:

### Case 1: The Node is a Leaf (No Children)
- If the node to be deleted has no children, simply remove it by setting the corresponding parent's pointer 
to `nullptr`.

### Case 2: The Node has One Child
- If the node has only one child (either left or right), replace the node with its child.

### Case 3: The Node has Two Children
- If the node has two children, replace it with its **inorder successor** (smallest value in the right subtree) 
or **inorder predecessor** (largest value in the left subtree).

## Additional Considerations
- **Updating Parent Pointers:** Ensure that the parent of the deleted node correctly points to the new child.
- **Memory Management:** Always deallocate the removed node to prevent memory leaks.
- **Recursive vs. Iterative Implementation:** The deletion can be implemented recursively or iteratively; 
recursion simplifies the code but may cause stack overflow in deep trees.

## Implementation Notes
- Use a helper function `_remove` to handle deletion cases recursively.
- Implement a helper function `_findMin` to get the inorder successor.
- Update the root pointer if the deleted node is the root of the tree.

Following these guidelines ensures a correct and efficient deletion operation in a BST.
Here is an example of adding [deletion](https://github.com/aaniaahh/Algorithms/blob/main/A03/main.cpp) 
to a given code.