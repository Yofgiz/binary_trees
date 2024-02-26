#include "binary_trees.h"

/**
 * array_to_bst - There will be an array and a binary tree is created from this array.
 * @array: pointer to the first element of the array.
 * @size: array size.
 *
 * Return: pointer to the node or NULL.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i, j;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}
		if (j == i)
		{
			if (bst_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
