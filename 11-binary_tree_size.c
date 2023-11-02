#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: size of the tree, if @tree is NULL, returns 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
		/*If the tree is empty (NULL), size is 0*/
	}
	else
	{
		/* Count the size by summing the sizes of left and right subtrees*/
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	}
}
