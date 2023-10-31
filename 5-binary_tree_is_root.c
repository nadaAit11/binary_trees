#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a root,
 * 0 otherwise or if the node is NULL.
 *
 * This function checks whether a given node is a root in a binary tree.
 * A node
 * is considered a root if it has no parent. If the provided node is NULL,
 * the function returns 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/* Check if the provided node is NULL */
	if (node == NULL)
		return (0);

	/* Check if the node has a parent (is not a root) */
	if (node->parent == NULL)
		return (1);  /* Node is a root */

	return (0);  /* Node is not a root */
}
