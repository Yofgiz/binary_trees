#include "binary_trees.h"

/**
 * bst_search - binary search tree value search.
 * @tree: pointer to the root node.
 * @value: The value to search for in the BST.
 *
 * Return: a pointer to the node containing the value or NULL.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
