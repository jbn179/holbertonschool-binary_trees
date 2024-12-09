#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  function that checks if a node is a leaf
 * @node: pointer to the node to check
 * Description:  function that checks if a node is a leaf
 * Return: return 1 if node is a leaf, otherwise 0, if node is NULL, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (node->left == NULL && node->right == NULL);
}
