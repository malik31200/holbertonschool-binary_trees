#include "binary_trees.h"
/**
 * binary_tree_uncle - Find the uncle of a node.
 * @node: Pointer to the node.
 *
 * Return: NULL if node is NULL or hasn't uncle or pointer to the uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->left && node->parent->parent->right)
	{
		if (node->parent == node->parent->parent->left)
			return (node->parent->parent->right);

		if (node->parent == node->parent->parent->right)
			return (node->parent->parent->left);
	}

	else
		return (NULL);

	return (0);
}
