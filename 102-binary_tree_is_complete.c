#include "binary_trees.h"
#include <stdlib.h>

/* Forward declarations of your functions */
int count_nodes(const binary_tree_t *tree);
int is_complete(const binary_tree_t *tree, int index, int total_nodes);

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is complete, 0 otherwise. If tree is NULL, returns 0.
 *
 * A binary tree is considered complete if all of its nodes have either zero
 * or two
 * children, and all of the nodes at the given level of the tree have two
 * children.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	return (is_complete(tree, 0, count_nodes(tree)));
}

/**
 * count_nodes - Recursively counts the number of nodes in a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The total number of nodes in the binary tree.
 */

int count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}

/**
 * is_complete - Recursively checks if a binary tree is complete.
 *
 * @tree: Pointer to the root node of the tree to check.
 * @index: The index assigned to the current node.
 * @total_nodes: The total number of nodes in the tree.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 *
 * A binary tree is considered complete if all of its nodes have either zero
 * or two
 * children, and all of the nodes at the given level of the tree have two
 * children.
 */

int is_complete(const binary_tree_t *tree, int index, int total_nodes)
{
	if (tree == NULL)
		return (1);

	if (index >= total_nodes)
		return (0);

	if (tree->left == NULL && tree->right != NULL)
		return (0);

	if (tree->right == NULL)
		return (is_complete(tree->left, 2 * index + 1, total_nodes));

	return (is_complete(tree->left, 2 * index + 1, total_nodes) &&
			is_complete(tree->right, 2 * index + 2, total_nodes));
}
