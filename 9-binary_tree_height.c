#include "binary_trees.h"

/**
  * binary_tree_height - Measure the height of the tree.
  * @tree: Pointer to the node's root.
  *
  * Return: Pointer to the new node.
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return ((height_left > height_right ? height_left : height_right) + 1);
}
