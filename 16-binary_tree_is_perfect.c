#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree, if tree is NULL, returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t left_height = binary_tree_height(tree->left);
		size_t right_height = binary_tree_height(tree->right);

		if (right_height >= left_height)
			return (1 + right_height);
		return (1 + left_height);
	}
}

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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t height = binary_tree_height(tree);
	int perfect_cond;

	int left_side = (1 << height) - 1;
	int right_side = (int)((1 << height) - 1);

	perfect_cond = (left_side == right_side);

	return (binary_tree_is_full(tree) && perfect_cond);
}
