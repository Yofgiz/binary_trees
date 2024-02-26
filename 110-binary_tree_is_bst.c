#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst_helper - check the validity of the binary search tree.
 * @lo: smallest node visited.
 * @hi: largest node visited.
 *
 * Return: if tree is valid,1 or rlse 0.
 */
int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
	if (tree != NULL)
	{
		if (tree->n < lo || tree->n > hi)
			return (0);
		return (is_bst_helper(tree->left, lo, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, hi));
	}
	return (1);
}

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
