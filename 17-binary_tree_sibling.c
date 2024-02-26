#include "binary_trees.h"

/**
 * binary_tree_sibling - node sibling ina binary tree.
 * @node: A pointer to the node.
 *
 * Return: a pointer to the sibling or NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
