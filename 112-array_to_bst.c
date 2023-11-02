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
	size_t i, j;

	/* If array is NULL, return NULL */
	if (array == NULL)
		return (NULL);

	/* Iterate through each element in the array */
	for (i = 0; i < size; i++)
	{
		/* Check if current element already exists in the array */
		for (j = 0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}

		/* If current element doesn't exist in the array */
		if (j == i)
		{
			/* Insert element into BST */
			if (bst_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}

	/* Return root of BST */
	return (tree);
}
