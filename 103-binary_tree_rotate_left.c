#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree.
 * @tree: Pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree after the rotation.
 *
 * A left-rotation is performed as follows:
 * 1. The right child of 'tree' becomes the new root.
 * 2. The left child of the new root (if any) becomes the right child of
 * 'tree'.
 * 3. 'tree' becomes the left child of the new root.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root = NULL;

	/* Check if tree is NULL or if it has no right child */
	if (tree == NULL || tree->right == NULL)
		return (tree);

	/* Step 1: The right child of 'tree' becomes the new root */
	new_root = tree->right;

	/* Step 2: The left child of the new root (if any) */
	/* becomes the right child of 'tree' */
	tree->right = new_root->left;
	if (tree->right)
		tree->right->parent = tree;

	/* Step 3: 'tree' becomes the left child of the new root */
	new_root->left = tree;

	/* Update parent pointers */
	new_root->parent = tree->parent;
	tree->parent = new_root;

	return (new_root);
}
