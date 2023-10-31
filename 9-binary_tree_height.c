#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 *
 * Description: This function measures the height of a binary tree.
 * The height of a tree is defined as the number of edges on the longest path
 * from the root to a leaf. If the tree is NULL, it returns 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* Check if tree is NULL or a leaf node */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* Recursively measure the height of the left subtree */
	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;

	/* Recursively measure the height of the right subtree */
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;

	/* Calculate and return the height of the current tree */
	return (left_height > right_height ? left_height : right_height);
}
