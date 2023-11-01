#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_levelorder - Perform level-order traversal of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node. The value in the node
 *         must be passed as a parameter to this function.
 *
 * This function performs a level-order traversal (also known as breadth-first
 * traversal) of a binary tree. It uses a queue to visit each level of the tree
 * from left to right. The queue is implemented as an array of
 * pointers to nodes,
 * with separate indices for the front and rear of the queue.
 *
 * If either 'tree' or 'func' is NULL, the function does nothing.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check for NULL parameters */
	if (tree == NULL || func == NULL)
		return;

	/* Initialize queue and indices */
	/* Assuming a maximum of 1024 nodes (adjust if needed) */
	binary_tree_t *queue[1024];
	int front = 0, rear = 0;
	binary_tree_t *current;

	/* Enqueue root node */
	queue[rear++] = (binary_tree_t *)tree;

	/* Process all nodes in the queue */
	while (front < rear)
	{
		/* Dequeue next node and call function */
		current = queue[front++];
		func(current->n);

		/* Enqueue left child if present */
		if (current->left)
			queue[rear++] = current->left;

		/* Enqueue right child if present */
		if (current->right)
			queue[rear++] = current->right;
	}
}
