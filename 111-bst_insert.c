#include "binary_trees.h"

/**
 * bst_insert - Insert a value into a Binary Search Tree (BST).
 * @tree: A double pointer to the root node of the BST.
 * @value: The value to insert.
 *
 * Description:
 * This function inserts a new node with the given value into
 * a Binary Search Tree (BST).
 * If the value already exists, it is ignored.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		else
		{
			return (bst_insert(&((*tree)->left), value));
		}
	}
	else if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		else
		{
			return (bst_insert(&((*tree)->right), value));
		}
	}

	return (NULL);
}

