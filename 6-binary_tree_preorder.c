#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_preorder - Traverse a binary tree in pre-order.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node's value.
 *
 * This function performs a pre-order traversal of a binary tree, starting from
 * the root node and processing nodes in the order of root, left, right. It
 * calls the provided function 'func' on each node's value.
 *
 * @tree: A pointer to the root node of the tree.
 * @func: A pointer to a function that receives an integer as an argument.
 *        The value of each node in the tree is passed as this argument.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if 'tree' or 'func' is NULL */
	/* If either is NULL, return and do nothing further */
	if (tree == NULL || func == NULL)
		return;

	/* Process the root node by calling 'func' with its value */
	func(tree->n);

	/* Recursively traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Recursively traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
