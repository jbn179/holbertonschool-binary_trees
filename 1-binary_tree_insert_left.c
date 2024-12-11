#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_insert_left - function that inserts a node
* as the left-child of another node
* @parent: pointer to the node to insert the left-child in
* @value: value to store in the new node
* Description: function that inserts a node as the left-child of another node
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
    /* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

    /* Initialize the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

    /* If parent already has a left child */
	if (parent->left != NULL)
		parent->left->parent = new_node;


	parent->left = new_node; /* Set the parent's left to the new node */


	return (new_node);


}
