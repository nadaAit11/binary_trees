#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node.
 * @parent: A pointer to the parent node.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node,
 * or NULL on failure or if parent is NULL.
 *
 * This function inserts a new node with the given value as the left child of
 * the specified parent node. If the parent node already has a left child,
 * the new node will take its place, and the old left child will be set as the
 * left child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if the parent is NULL */
	if (parent == NULL)
		return (NULL);

	/* Create a new node with the provided value */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* If the parent already has a left-child, reassign it */
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	/* Set the new node as the left child of the parent */
	parent->left = new_node;

	return (new_node);
}
