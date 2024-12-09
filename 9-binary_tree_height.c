#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: A pointer to the root node of the tree to measure the height.
*
* Description:
* This function measures the height of a binary tree, where the height is
* defined as the number of edges along the longest path from the root node
* to a leaf node. The height of an empty tree is considered 0.
*
* Return: The height of the tree. If tree is NULL, return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;  /* Declare variables at the top */

	if (tree == NULL)
		return (0);


	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);


	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
