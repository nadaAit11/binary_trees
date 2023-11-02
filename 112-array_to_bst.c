#include "binary_trees.h"

/**
 * array_to_bst - Builds a binary search tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created BST, or NULL upon failure.
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i;

	/* If array is NULL, return NULL */
	if (array == NULL)
		return (NULL);

	/* Iterate through each element in the array */
	for (i = 0; i < size; i++)
	{
		/* Insert element into BST, ignoring duplicates */
		bst_insert(&tree, array[i]);
	}

	/* Return root of BST */
	return (tree);
}
