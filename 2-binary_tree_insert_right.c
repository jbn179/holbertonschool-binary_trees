#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node
 * as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Description: function that inserts a node as the right-child of another node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

binary_tree_t *new_node;

	/* Check if parent is NULL */
	if (!parent)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	/* Initialize the new node's values */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;

	/* If parent already has a right child, update its parent */
	if (parent->right)
		parent->right->parent = new_node;

	/* Set the new node as the right child of the parent */
	parent->right = new_node;

	/* Return the newly created node */
	return (new_node);
}
