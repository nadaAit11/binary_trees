#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 * Return: leaves in tree, if @tree is NULL, returns 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		/* If both left and right child are NULL, it's a leaf */
		return (1);
	}
	/* Recursively count leaves in left and right subtrees */
	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);
	/* Total leaves in the entire tree */
	return (left_leaves + right_leaves);
}
