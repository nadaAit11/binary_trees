#include "binary_trees.h"
#include <limits.h>

/**
 * check_bst_util - Utility function to check if a binary tree is a valid BST.
 * @tree: A pointer to the root node of the tree.
 * @lower_bound: The minimum value for nodes in the subtree.
 * @upper_bound: The maximum value for nodes in the subtree.
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise.
 */
int check_bst_util(const binary_tree_t *tree, int lower_bound, int upper_bound)
{
	/* If tree is NULL, it's a valid BST */
	if (tree == NULL)
		return (1);

	/* If tree->n is out of bounds, it's not a valid BST */
	if (tree->n <= lower_bound || tree->n >= upper_bound)
		return (0);

	/* Recursively check left and right subtrees */
	return (check_bst_util(tree->left, lower_bound, tree->n) &&
			check_bst_util(tree->right, tree->n, upper_bound));
}

/**
 * binary_tree_is_bst - Check if a binary tree is a valid BST.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	/* If tree is NULL, it's not a valid BST */
	if (tree == NULL)
		return (0);

	/* Use utility function to check if tree is a valid BST */
	return (check_bst_util(tree, INT_MIN, INT_MAX));
}
