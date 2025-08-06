#include "binary_trees.h"
/**
 * binary_tree_leaves - Count the leaves in a binary tree.
 * @tree: Pointer to node's root.
 *
 * Return: 0 if a tree is NULL,return number of leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}

	count += binary_tree_leaves(tree->right);
	count += binary_tree_leaves(tree->left);

	return (count);
}
