#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a Binary Search Tree (BST).
 * @tree: A pointer to the root node of the BST to search.
 * @value: The value to search for in the tree.
 *
 * Description: This function searches for a given value in a
 * Binary Search Tree (BST).
 * It starts at the root and moves either left or
 * right depending on whether the value
 * is less than or greater than the current node, respectively.
 *
 * Return: A pointer to the node containing the value, or NULL if not found.
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	/* If tree is empty or value is not found, return NULL */
	if (tree == NULL)
		return (NULL);

	/* If value is less than tree's value, search left subtree */
	if (value < tree->n)
		return (bst_search(tree->left, value));
	/* If value is greater than tree's value, search right subtree */
	else if (value > tree->n)
		return (bst_search(tree->right, value));

	/* If value matches tree's value, return current node */
	return ((bst_t *)tree);
}
