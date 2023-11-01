#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, 0 otherwise or if the node is NULL.
 *
 * This function checks whether a given node is a leaf in a binary tree.
 * A node is considered a leaf if both its left and right children are NULL.
 * If the provided node is NULL, the function returns 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Check if the provided node is NULL */
	/* If it is, return 0 because a NULL node cannot be a leaf */
	if (node == NULL)
		return (0);

	/* Check if both left and right children are NULL */
	/* If they are, return 1 because the node is a leaf */
	/* Otherwise, return 0 because the node is not a leaf */
	if (node->left == NULL && node->right == NULL)
		return (1);  /* Node is a leaf */

	return (0);  /* Node is not a leaf */
}
