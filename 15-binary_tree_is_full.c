#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, otherwise 0.
 * if @tree is NULL, returns 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	else
	{
		return (0);
	}
}
