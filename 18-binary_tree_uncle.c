#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node:  pointer to the node to find the uncle
 * Description: function that finds the uncle of a node
 * Return: If node is NULL, return NULL, If node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Check if node is NULL, or if node has no parent,*/
	/* or if node's parent has no parent */
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	/* If node's parent is the left child of its grandparent */
	if (node->parent == node->parent->parent->left)
	/* Return the right child of the grandparent (uncle) */
		return (node->parent->parent->right);

	else
	/* Otherwise, return the left child of the grandparent (uncle) */
		return (node->parent->parent->left);
}
