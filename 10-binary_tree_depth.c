#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: 0 if tree is NULL or return the measure of the depth.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		count++;
	}

	return (count);
}
