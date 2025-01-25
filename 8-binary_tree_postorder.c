#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a binary tree
 * using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Description: function that goes through a binary tree
 * using post-order traversal
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if either the tree or the function pointer is NULL */
	if (!tree || !func)
		return;

	/* Recursively traverse the left subtree */
	binary_tree_postorder(tree->left, func);

	/* Recursively traverse the right subtree */
	binary_tree_postorder(tree->right, func);

	/* Call the function on the current node's value */
	func(tree->n);
}
