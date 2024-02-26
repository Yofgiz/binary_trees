#include "binary_trees.h"

/**
 * binary_tree_delete - It deletes the binary tree.
 * @tree:pointer to a root node.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
