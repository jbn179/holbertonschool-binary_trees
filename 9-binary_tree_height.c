#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: A pointer to the root node of the tree to measure the height.
*
* Return: The height of the tree. If the tree is NULL, return 0.
*
* Description: The height of a node is the length of the longest path
* from that node to a leaf. A leaf node has a height of 0, and each
* other node’s height is one plus the maximum height of its left and
* right children.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);


	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);


	return ((left_height > right_height ? left_height : right_height) + 1);
}
