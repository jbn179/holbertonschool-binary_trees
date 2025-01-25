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

	/* Base case: if tree is NULL, height is 0 */
	if (tree == NULL)
		return (0);

	/* Recursively calculate height of left and right subtrees */
	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	/* Return the maximum of left and right subtree heights */
	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the tree. If the tree is NULL, return 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	/* Base case: if tree is NULL, size is 0 */
	if (!tree)
		return (0);

	/* Recursively calculate */
	/* size: 1 (current node) + size of left subtree + size of right subtree */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Description: function that checks if a binary tree is perfect
 * Return: If tree is NULL, return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, perfect_size;

	/* If tree is NULL, it's not perfect */
	if (!tree)
		return (0);

	/* Calculate the height and size of the tree */
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	/* Calculate the size of a perfect binary tree with the same height */
	perfect_size = (1 << (height + 1)) - 1;

	/* Check if the actual size matches the perfect size */
	return (size == perfect_size);
}
