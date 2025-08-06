#include "binary_trees.h"

/**
 * binary_tree_balance - Measure the balance factor of a binary tree.
 * @tree: Pointer to the root.
 *
 * Return: Balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (tree)
	{
		height_left = binary_tree_height(tree->left);
		height_right = binary_tree_height(tree->right);

		if (!tree->left)
			height_left = -1;

		if (!tree->right)
			height_right = -1;
	}
	return (height_left - height_right);
}
