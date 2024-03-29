#include "binary_trees.h"

/**
 * binary_tree_is_root - checks the root.
 * @node: pointer to the node.
 *
 * Return: if root -1 else 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
