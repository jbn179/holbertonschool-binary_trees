#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: The function applies in-order traversal:
 * 1. Traverse the left subtree.
 * 2. Visit the current node and call `func` with its value.
 * 3. Traverse the right subtree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

    /* Traverse the left subtree */
	binary_tree_inorder(tree->left, func);

    /* Visit the current node */
	func(tree->n);

    /* Traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
