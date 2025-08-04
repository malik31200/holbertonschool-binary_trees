#include "binary_trees.h"

/**
  * binary_tree_height - Measure the height of the tree.
  * @tree: Pointer to the node's root.
  *
  * Return: Pointer to the new node.
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}
