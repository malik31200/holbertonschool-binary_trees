#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if the node is root.
 * @node: Node to check.
 *
 * Return: 1 on success, 0 on faillure.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	else if (node->parent)
		return (0);

	else
		return (1);
}
