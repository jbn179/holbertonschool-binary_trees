#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Description: function that counts the leaves in a binary tree
 * Return: If tree is NULL, the function must return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* If the tree is NULL, return 0 (no leaves) */
	if (!tree)
		return (0);

	/* If the node has no left or right children, it is a leaf */
	if (!tree->left && !tree->right)
		return (1);

	/* Recursively count leaves in left and right subtrees */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
