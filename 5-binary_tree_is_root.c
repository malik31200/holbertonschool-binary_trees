#include "binary_trees.h"

/**
  * binary_tree_is_root - Check if the node is root.
  * @node: Node to check.
  *
  * Return: Pointer to the new node.
  */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);
	else
		return (1);
}
