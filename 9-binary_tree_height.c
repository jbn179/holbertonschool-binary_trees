#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree (in edges).
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If the tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

    /* Recursively calculate the height of left and right subtrees */
	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

    /* Return the greater height */
	return (left_height > right_height ? left_height : right_height);
}
