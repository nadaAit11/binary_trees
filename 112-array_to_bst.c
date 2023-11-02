#include "binary_trees.h"

/**
 * bst_free - Frees a Binary Search Tree (BST).
 * @tree: A pointer to the root node of the tree to free.
 */

void bst_free(bst_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	/* Recursively free left and right subtrees */
	bst_free(tree->left);
	bst_free(tree->right);

	/* Free root node */
	free(tree);
}

/**
 * array_to_bst - Builds a Binary Search Tree (BST) from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in the array.
 *
 * Description: This function constructs a Binary Search Tree (BST)
 * from an array of integers.
 * If a value is already present in the tree, it will be ignored.
 *
 * Return: A pointer to the root node of the created BST, or NULL on failure.
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t index;

	/* If array is NULL or empty, return NULL */
	if (array == NULL || size == 0)
		return (NULL);

	/* Iterate through each element in the array */
	for (index = 0; index < size; index++)
	{
		/* Insert element into BST */
		if (bst_insert(&root, array[index]) == NULL)
		{
			/* If insertion fails, free BST and return NULL */
			bst_free(root);
			return (NULL);
		}
	}

	/* Return root of BST */
	return (root);
}
