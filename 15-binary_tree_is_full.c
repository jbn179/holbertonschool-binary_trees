#include "binary_trees.h"

/**
* binary_tree_is_full - checks if a binary tree is full
* @tree:  pointer to the root node of the tree to check
*
* Return: tree is NULL, your function must return 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If the tree is NULL, it is not full */
	if (tree == NULL)
	return (0);
	/* If the node is a leaf, it is full */
	if (tree->left == NULL && tree->right == NULL)
	return (1);

	if (tree->left != NULL && tree->right != NULL)
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If the node has only one child, it is not full */
	return (0);
}
