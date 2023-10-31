#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_inorder - Traverse a binary tree in in-order.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node's value.
 *
 * This function performs an in-order traversal of a binary tree. It starts
 * from the root node, traverses the left subtree, processes the current node,
 * and finally traverses the right subtree. For each node, it calls the
 * provided function 'func' with the node's value as an argument.
 *
 * @tree: A pointer to the root node of the tree.
 * @func: A pointer to a function that receives an integer as an argument.
 *        The value of each node in the tree is passed as this argument.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if 'tree' or 'func' is NULL */
	/* If either is NULL, return and do nothing further */
	if (tree == NULL || func == NULL)
		return;

	/* Recursively traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* Process the current node by calling 'func' with its value */
	func(tree->n);

	/* Recursively traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
