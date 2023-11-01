#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @firstNode: Pointer to the first node.
 * @secondNode: Pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes.
 *         If no common ancestor is found, it returns NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *firstNode,
		const binary_tree_t *secondNode)
{
	const binary_tree_t *tempFirst = NULL;
	const binary_tree_t *tempSecond = NULL;

	/* Handle invalid input */
	if (firstNode == NULL || secondNode == NULL)
	{
		return (NULL);
	}

	/* Start traversing from both nodes upwards */
	for (tempFirst = firstNode; tempFirst; tempFirst = tempFirst->parent)
	{
		for (tempSecond = secondNode; tempSecond; tempSecond = tempSecond->parent)
		{
			/* Check if nodes are same, indicating a common ancestor */
			if (tempFirst == tempSecond)
			{
				return ((binary_tree_t *)tempFirst);
			}
		}
	}

	/* If no common ancestor is found after checking all nodes, return NULL */
	return (NULL);
}
