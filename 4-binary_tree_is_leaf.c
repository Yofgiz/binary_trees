#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is leaf(True or False).
 * @node: pointer to the node.
 *
 * Return: If lead -1 else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
