#include "binary_trees.h"
/**
 * binary_tree_balance - Measure the balance factor of a binary tree.
 * @tree: Pointer to the root.
 * Return: 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bfactor;

	if (tree == NULL)
	{
		return (0);
	}

	bfactor = (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (bfactor);

}
