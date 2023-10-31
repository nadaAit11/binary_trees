#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * This function deletes an entire binary tree starting from the root node
 * specified by 'tree' and recursively deletes all its child nodes and frees
 * the associated memory. If 'tree' is NULL, no action is taken.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Recursively delete the left and right subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Free the memory of the current node */
	free(tree);

	/* Set the pointers to NULL */
	tree = NULL;
}
