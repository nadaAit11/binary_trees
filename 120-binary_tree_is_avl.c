#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <limits.h>

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The height of the tree or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}

/**
 * is_avl_recursive - Recursively check if a binary tree is a valid AVL tree
 *
 * @tree: Pointer to the root node of the tree to check
 * @min: Minimum value allowed for this node
 * @max: Maximum value allowed for this node
 *
 * Return: 1 if tree is a valid AVL Tree, 0 otherwise
 */

int is_avl_recursive(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	if (abs(left_height - right_height) <= 1 &&
			is_avl_recursive(tree->left, min, tree->n) &&
			is_avl_recursive(tree->right, tree->n, max))
		return (1);

	return (0);
}

/**
 * binary_tree_is_avl - Check if a binary tree is a valid AVL tree
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid AVL Tree, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_avl_recursive(tree, INT_MIN, INT_MAX));
}
