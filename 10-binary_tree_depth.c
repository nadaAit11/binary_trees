#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node. If tree is NULL, return 0.
 *
 * Description: This function measures the depth of a node in a binary tree.
 *              The depth of a node is defined as the number of edges from the
 *              root to the node. If the node is NULL, it returns 0. Otherwise,
 *              it recursively calculates the depth by adding 1 to the depth of
 *              the parent node until it reaches the root.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* Base case: If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Recursive case: If tree has a parent, calculate its depth */
	if (tree->parent != NULL)
		/* Add 1 to the depth of the parent node */
		return (binary_tree_depth(tree->parent) + 1);

	/* If tree does not have a parent, it is the root, so its depth is 0 */
	return (0);
}
