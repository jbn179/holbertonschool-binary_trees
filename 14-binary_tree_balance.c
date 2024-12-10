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


	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);


	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Description: function that measures the balance factor of a binary tree
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	left_height = tree->left ? (int)binary_tree_height(tree->left) + 1 : 0;
	right_height = tree->right ? (int)binary_tree_height(tree->right) + 1 : 0;

	return (left_height - right_height);
}
