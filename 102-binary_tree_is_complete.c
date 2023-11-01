e	

e	
nclude "binary_trees.h"

int is_complete(const binary_tree_t *tree, int index, int total_nodes);
int count_nodes(const binary_tree_t *tree);

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is complete, 0 otherwise. If tree is NULL, returns 0.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_complete(tree, 0, count_nodes(tree)));
}

/**
 * is_complete - Recursively checks if a binary tree is complete.
 * @tree: Pointer to the root node of the tree to check.
 * @index: The index assigned to the current node.
 * @total_nodes: The total number of nodes in the tree.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */

int is_complete(const binary_tree_t *tree, int index, int total_nodes)
{
	if (tree == NULL)
		return (1);

	if (index >= total_nodes)
		return (0);

	return (is_complete(tree->left, 2 * index + 1, total_nodes) &&
			is_complete(tree->right, 2 * index + 2, total_nodes));
}

/**
 * count_nodes - Recursively counts the number of nodes in a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The total number of nodes in the binary tree.
 */

int count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}
