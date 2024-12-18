#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node:  pointer to the node to find the uncle
 * Description: function that finds the uncle of a node
 * Return: If node is NULL, return NULL, If node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
