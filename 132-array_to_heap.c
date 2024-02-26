#include "binary_trees.h"

/**
 * array_to_heap - Maximim Binary Heap tree from the array
 * @array: pointer to the first element of the array
 * @size: size of the array
 *
 * Return: pointer to the binary heap or NULL
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
