#include "binary_trees.h"

/**
* binary_tree_is_root - Checks if a given node is the root of the binary tree
* @node: Pointer to the node to check
*
* Description: A node is considered the root if it does not have a parent.
*
* Return: 1 if the node is a root, otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);

	if (node->parent == NULL)
	return (1);


	return (0);
}
