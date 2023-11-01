#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/* Function prototypes */
int height(const binary_tree_t *tree);
void printGivenLevel(const binary_tree_t *tree, int level, void (*func)(int));

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order
 * traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = height(tree);
	int i;

	if (tree == NULL || func == NULL)
		return;

	for (i = 1; i <= h; i++)
		printGivenLevel(tree, i, func);
}

/**
 * printGivenLevel - Prints nodes at a given level.
 * @tree: Pointer to the root node of the tree to traverse.
 * @level: Level at which nodes are to be printed.
 * @func: Pointer to a function to call for each node.
 */
void printGivenLevel(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		printGivenLevel(tree->left, level - 1, func);
		printGivenLevel(tree->right, level - 1, func);
	}
}

/**
 * height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If tree is NULL, returns 0.
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
	{
		int leftHeight = height(tree->left);
		int rightHeight = height(tree->right);

		if (leftHeight > rightHeight)
			return (leftHeight + 1);

		else
		{
			return (rightHeight + 1);
		}
	}
}
