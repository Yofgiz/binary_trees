#include "binary_trees.h"

/**
 * is_full_recursive - recursice check.
 * @tree: pointer to the root node.
 *
 * Return: if tree is full 1 else 0
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - binary tree fullness check.
 * @tree: pointer to the root node.
 *
 * Return: if tree is full 1 or else 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
