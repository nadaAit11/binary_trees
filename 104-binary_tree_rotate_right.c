#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right rotation on a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Description: This function performs a right rotation on a binary tree.
 * It first checks if the root node or its left child is NULL. If either
 * is NULL, it returns the root node as is. Otherwise, it performs the
 * rotation by making the left child of the root node the new root node,
 * and adjusting the parent and child pointers accordingly.
 *
 * Return: A pointer to the new root node of the tree after rotation.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	/* Check if rotation is possible */
	if (tree == NULL || tree->left == NULL)
	{
		return (tree);
	}

	/* Store the new root (left child of the original root) */
	binary_tree_t *left_child = tree->left;

	/* Update the left child of the original root */
	tree->left = left_child->right;
	if (left_child->right != NULL)
	{
		left_child->right->parent = tree;
	}

	/* Update the parent of the new root */
	left_child->parent = tree->parent;

	/* Update the parent of the original root */
	if (tree->parent != NULL)
	{
		if (tree->parent->left == tree)
		{
			tree->parent->left = left_child;
		}
		else
		{
			tree->parent->right = left_child;
		}
	}

	/* Make the original root the right child of the new root */
	tree->parent = left_child;
	left_child->right = tree;

	return (left_child);
}
