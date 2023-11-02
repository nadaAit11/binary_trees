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
	binary_tree_t *new_root = tree->left;

	/* Update the left child of the original root */
	tree->left = new_root->right;
	if (new_root->right != NULL)
	{
		new_root->right->parent = tree;
	}

	/* Update the parent of the new root */
	new_root->parent = tree->parent;

	/* Update the parent of the original root */
	if (tree->parent != NULL)
	{
		if (tree->parent->left == tree)
		{
			tree->parent->left = new_root;
		}
		else
		{
			tree->parent->right = new_root;
		}
	}

	/* Make the original root the right child of the new root */
	tree->parent = new_root;
	new_root->right = tree;

	return (new_root);
}
