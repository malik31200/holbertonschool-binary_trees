#include "binary_trees.h"

/**
  * binary_tree_delete - Delete the enire binary tree.
  * @tree: Tree's root.
  *
  * Return: Void.
  */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
