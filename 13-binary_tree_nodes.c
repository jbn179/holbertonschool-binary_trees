#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
* @tree: Pointer to the root node of the tree to count the number of nodes
*
* Return: The number of nodes with at least 1 child, or 0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;
    /* Check if the current node has at least one child */
	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);
    /* If no children, do not count this node */
	return (1 + left_nodes + right_nodes);
}
