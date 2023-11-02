#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree.
 * @tree: Pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree once rotated,
 *         or NULL if tree is NULL.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root, *old_root;

	if (tree != NULL)
	{
		old_root = tree;
		if (old_root->left != NULL)
		{
			new_root = old_root->left;

			old_root->left = new_root->right;
			if (new_root->right != NULL)
			{
				new_root->right->parent = old_root;
			}

			/* Link old_root's parent to new_root */
			new_root->parent = old_root->parent;
			if (old_root->parent == NULL)
			{
				tree = new_root;
			}
			else if (old_root == old_root->parent->right)
			{
				old_root->parent->right = new_root;
			}
			else
			{
				old_root->parent->left = new_root;
			}

			/* Put old_root on new_root's right */
			new_root->right = old_root;
			old_root->parent = new_root;

			return (tree);
		}
	}

	return (NULL);
}
