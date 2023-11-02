#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 * Return: number of nodes  with at least 1 child in @tree,
 * if @tree is NULL, returns 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);/* If the tree is empty (NULL), there are no nodes*/
	}
	else if (tree->left != NULL || tree->right != NULL)
	{
		/* If the current node has at least one child, it's counted as a node*/
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	else
	{
		/*Recursively count the number of nodes in the left and right subtrees*/
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
}
