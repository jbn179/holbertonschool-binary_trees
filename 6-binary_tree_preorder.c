#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree
 * using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Description: function that goes through a binary tree
 * using pre-order traversal
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if the tree or the function pointer is NULL */
	if (!tree || !func)
		return;

	/* Call the function on the current node's value */
	func(tree->n);

	/* Recursively traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Recursively traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
