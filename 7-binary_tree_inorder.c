#include "binary_trees.h"

/**
  * binary_tree_inorder - Go through binnary tree using in-order.
  * @tree: Pointer to node's root.
  * @func: Pointer to function.
  *
  * Return: Void.
  */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
